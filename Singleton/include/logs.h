#ifndef __SELF_LOG__
#define __SELF_LOG__
#include <iostream>
#include <string>
class perf_trace
{
  public:
	perf_trace() { std::cout << "Start perf_trace" << std::endl; }
	virtual ~perf_trace() { std::cout << "Exit perf_trace" << std::endl; }
	virtual void log(std::string log_info) = 0;
	virtual void update_task(int tid, std::string task) = 0;
	virtual void update_pid(int pid) = 0;
};

perf_trace *get_perf_trace(void);
#endif