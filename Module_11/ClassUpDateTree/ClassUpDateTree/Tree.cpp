#include "Tree.h"




Tree::Tree(std::string name, TreeType treetype)
{
	_name = name;
	_treetype = treetype;
}

Tree::Tree( std::string name, TreeType treetype, int metrs, int age)
{
	_metres = metrs;
	_age = age;
	_treetype = treetype;
	_name = name;
}

Tree::Tree(std::string name, std::string vid, TreeType treetype, int metrs, int age)
{
	_metres = metrs;
	_age = age;
	_treetype = treetype;
	_name = name;
	_vid = vid;
}




TreeType Tree::getTreetype()
{
	return _treetype;
}

std::string Tree::getName()
{
	return _name;
}



int Tree::getMetres()
{
	return _metres;
}

int Tree::getAge()
{
	return _age;
}

void Tree::infoTree()
{
	std::cout << "Tree: " << getName() << std::endl;
}
std::string Tree::getVid()
{
	return _vid;
}

void Tree::setVid(std::string vid)
{
	_vid = vid;

}

