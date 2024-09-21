#include "Tree.h"

Tree::Tree()
{
}

Tree::~Tree()
{
}

Tree::Tree(std::string name, std::string vid, TypeTree treetype)
{
	_name = name;
	_vid = vid;
	_treetype = treetype;
}

TypeTree Tree::getTypetree()
{
	return _treetype;
}

std::string Tree::getVid()
{
	return _vid;
}


