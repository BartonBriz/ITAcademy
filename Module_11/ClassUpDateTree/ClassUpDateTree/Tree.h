#pragma once
#include <iostream>
#include "typeStruct.h"
class Tree
{
public: 
	Tree(std::string name, TreeType treetype);
	Tree( std::string name, TreeType treetype, int metrs, int age);
	Tree(std::string name, std::string vid, TreeType treetype, int metrs, int age);
	


	TreeType getTreetype();
	std::string getName();
	int getMetres();
	int getAge();
	std::string getVid();

	void setVid(std::string vid);
	void infoTree();
protected:
private:
	std::string _name;
	TreeType _treetype;
	int _metres = 0;
	int _age = 0;
	std::string _vid;
};

