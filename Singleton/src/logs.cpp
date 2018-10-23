#include "logs.h"
#include <iostream>
#include <string>
#include <fstream>
#include <thread>
#include <mutex>
#include <unordered_map>

class caffe_bench : public perf_trace
{
  public:
	caffe_bench(std::string file = "log.txt")
	{
		log_file = file;
		// if (!ofs.is_open())
		// {
		// 	ofs.open(file);
		// }
		// if (!ofs.is_open())
		// 	throw std::runtime_error("open file failed");
		std::cout << "enter caffe bench" << std::endl;
	}
	virtual ~caffe_bench()
	{
		if (ofs.is_open())
		{
			ofs.close();
		}
		std::cout << "Exit caffe perf test" << std::endl;
	}
	virtual void log(std::string log_info) override
	{
		std::lock_guard<std::mutex> guards(mtx);
		//std::cout << "Tid: " << std::this_thread::get_id() << " : " << log_info << std::endl;
		if (ofs.is_open())
		{
			ofs << log_info << std::endl;
			ofs.close();
			ofs.open(log_file, std::ios::app);
		}
	}
	virtual void update_task(int tid, std::string task) override
	{
		std::lock_guard<std::mutex> guards(mtx);
		auto iter = map_id2task.find(tid);
		if (iter == map_id2task.end()) //not find and insert to map
		{
			map_id2task.insert(std::make_pair(tid, task));
		}
		else //update task map
		{
			iter->second = std::move(task);
		}
		for (auto &iter : map_id2task)
		{
			std::cout << "tid: " << iter.first << " ,task: " << iter.second << std::endl;
		}
		std::cout << std::endl;
	}
	virtual void update_pid(int pid) override
	{
		std::lock_guard<std::mutex> guards(mtx);
		this->_pid = pid;
	}

  private:
	std::ofstream ofs;
	std::mutex mtx;
	int _pid;
	std::string log_file;
	std::unordered_map<int, std::string> map_id2task;
};

//create the only global instance...
perf_trace *get_perf_trace(void)
{
	static caffe_bench cbc;
	return &cbc;
}