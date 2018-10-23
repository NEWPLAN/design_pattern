#include "star.h"
#include "real_star.h"
#include <string>

int main(int argc, char const *argv[])
{
	RealStar rs("Jay Chou");
	ProxyStar ps("Proxy studio");
	ps.serve_star(std::move(rs));

	ps.sign_contect();
	ps.book_ticket();
	ps.singe();
	ps.collect_money();
	return 0;
}
