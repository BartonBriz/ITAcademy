#include "tools.h"



Tree::Tree(std::string _name, int _id, int _count)
{
	_name =  name;
	_id = id;
	_count = count;
	std::cout << "Constructor 1" << std::endl;
}

Tree::Tree(Tree& other) //realse copy
{
	_count = other._count;
	_id = other._id;
	 _name = other._name;
}

std::string Tree::getName()
{
	return _name;
}
int Tree::getCount()
{
	return _count;
}
int Tree::getId()
{
	return _id;
}

void Tree::printinfo()
{
	std::cout << _name << _id << _count << std::endl;
}