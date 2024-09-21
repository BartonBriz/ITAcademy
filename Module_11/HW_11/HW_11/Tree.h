#pragma once
#include <iostream>
#include <string>
#include "typeTree.h"
class Tree
{
public:
	Tree();
	~Tree();
	Tree(std::string name, std::string vid, TypeTree treetype);
	virtual void wind() = 0; // abstract methods
	TypeTree getTypetree();
	std::string getVid();
protected:
private:
	std::string _name;
	std::string _vid;
	TypeTree _treetype;
};

