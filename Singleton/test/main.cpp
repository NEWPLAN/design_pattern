#include "logs.h"
#include <future>
#include <vector>

int main(int argc, char **argv)
{
	perf_trace *a_perf = get_perf_trace();

	std::vector<std::future<int>> future_list;
	for (int index = 0; index < 1024; index++)
	{
		std::string a_str = "Hello, your index is: ";
		a_str += std::to_string(index);
		std::future<int> f1 = std::async(std::launch::async, [&, a_str, index]() {
			a_perf->update_task(index, a_str);
			a_perf->log(a_str);
			return index;
		});
		future_list.push_back(std::move(f1));

		if (index % 10 == 0)
		{
			for (auto &f : future_list)
			{
				f.get();
			}
			future_list.clear();
		}
	}
	for (auto &f : future_list)
	{
		f.get();
	}
	std::cout << "Main thread done" << std::endl;
	return 0;
}