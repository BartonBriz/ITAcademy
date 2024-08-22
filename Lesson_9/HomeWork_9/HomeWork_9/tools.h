#pragma once
#include <iostream>
#include <string>
class Tree
{
public:
	Tree();
	Tree(std::string _name, int _id, int _count);
	Tree(Tree& other); // constructor copy

	std::string getName();
	int getCount();
	int getId();

	void printinfo();

protected:


private:
	std::string _name = "First tree";
	int _count = 0;
	int _id = 1;

};