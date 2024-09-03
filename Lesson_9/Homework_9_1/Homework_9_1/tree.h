#pragma once
#include <iostream>
#include "forest.h"
#include <string>


class Tree
{
public:
	Tree(std::string name); // constructor use name 
	Tree(Tree& p); // constr copy base
	~Tree();


	int getID() const;
	std::string getName() const;

	void wind();
protected:
private:

	std::string _name;  // name Tree
	static int _count;
	int _id = 0;
};