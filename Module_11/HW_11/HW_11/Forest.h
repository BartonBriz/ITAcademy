#pragma once
#include "Tree.h"
#include <vector>
class Forest : public Tree
{
public:
	~Forest();
	void Add(Tree* foresttree);
	void wind();
private:
	std::vector<Tree*> _foresttree;
};

