#include "tree.h"

Tree::Tree(std::string name) // const use name
{

	_name = name;
	
	for (int i = 0; i <= _count; i++)
	{
		_id += 1;
	}
	++_count;

	wind();
	std::cout << "\n count: " << _count  << std::endl;
	
}



Tree::Tree(Tree& p)
{
	
	_name = p._name;
	_id = p._id;
	
	p.wind();
	std::cout <<"\n count: " << _count << std::endl;
}

Tree::~Tree()
{
	std::cout << "Adress cache: " << &_name << std::endl;
	std::cout << "Deleted constructors..." << " " << _name  << " ____ ID:" << _id << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
}

int Tree::getID() const
{
	return _id;
}

std::string Tree::getName() const
{
	return _name;
}



void Tree::wind()
{
	
	std::cout << "Name tree: " << getName() << "\n ID " << getID();
}

int Tree::_count = 0;
