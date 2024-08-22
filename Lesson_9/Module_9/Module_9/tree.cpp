#include "tools.h"





Tree::Tree(std::string name, int id) // base constr
{
	_name = name; 
	_id = new int;
	*_id = id;
	_count++;
	wind();
	std::cout << "\n" << "COUNT " << getCount() << "\n\n";
	
}
Tree::Tree(Tree& p) // constructor copy
{
	_name = p._name;
	_id = new int;
	*_id = *p._id;
	for (int i = 0; i < _count; i++)
	{
		*p._id += 1;
	}
	_count++;
	p.wind();
	std::cout << "\n" << "COUNT " << p.getCount() << "\n\n";
	
}
std::string Tree::getName()
{
	return _name;
}

int Tree::getCount()
{
	return _count;
}

int Tree::_count = 0;


void Tree::wind()
{
	std::cout << "Name " << _name << "\n" << "ID " << *_id << std::endl;
}

Tree::~Tree()
{
	delete _id;
	std::cout << "Deleted constructor " << _id << std::endl;
}



