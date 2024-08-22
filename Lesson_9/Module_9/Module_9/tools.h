#pragma once
#include <iostream>
#include <string>
#include <memory>


class Tree
{
public:
	
	Tree(std::string name,int id);
	Tree(Tree& p);

	std::string getName();
	int getCount();
	



	void wind();
	~Tree();
protected:
private:
	std::string _name ;
	int* _id ;
	static int _count ;

};