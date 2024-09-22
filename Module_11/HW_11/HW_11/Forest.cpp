#include "Forest.h"



Forest::~Forest()
{
	std::cout << "Good bye Forest." << std::endl;
}

void Forest::Add(Tree* foresttree)
{
	_foresttree.push_back(foresttree);
}

void Forest::wind()
{
	for (Tree* foresttree: _foresttree)
	{
		std::cout <<"\nType: " << TypeToString(foresttree->getTypetree()) << std::endl;
		std::cout << "\n";
		std::cout << "abstract methods wind(): ";
		foresttree->wind();
	}
}
