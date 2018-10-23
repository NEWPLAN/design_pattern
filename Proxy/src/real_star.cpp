#include "real_star.h"
#include <iostream>

RealStar::RealStar(std::string name)
{
	this->_name = name;
	std::cout << this->_name << "  borns" << std::endl;
}

void RealStar::singe(void)
{
	std::cout << this->_name << "  singes" << std::endl;
}

void RealStar::sign_contect(void)
{
	std::cout << this->_name << "  signs contact" << std::endl;
}

void RealStar::collect_money(void)
{
	std::cout << this->_name << "  collects money" << std::endl;
}

void RealStar::book_ticket(void)
{
	std::cout << this->_name << "  books tickets" << std::endl;
}

RealStar::~RealStar()
{
	std::cout << this->_name << "  dies" << std::endl;
}

ProxyStar::ProxyStar(std::string name)
{
	this->_name = name;
	std::cout << this->_name << "  borns" << std::endl;
}

void ProxyStar::singe(void)
{
	this->_str->singe();
}

void ProxyStar::sign_contect(void)
{
	std::cout << this->_name << "  signs contact" << std::endl;
}

void ProxyStar::collect_money(void)
{
	std::cout << this->_name << "  collects money" << std::endl;
}

void ProxyStar::book_ticket(void)
{
	std::cout << this->_name << "  books tickets" << std::endl;
}

ProxyStar::~ProxyStar()
{
	std::cout << this->_name << "  dies" << std::endl;
}

void ProxyStar::serve_star(RealStar astr)
{
	this->_str = &astr;
}