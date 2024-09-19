#pragma once
#include "Tree.h"
#include "typeStruct.h"
class Dub : public Tree
{
public:
	Dub(std::string name): Tree{name,TreeType::Dyb} {};
	void infoTree();
	using Tree::Tree;
protected:
private:
	std::string _vid;
};

