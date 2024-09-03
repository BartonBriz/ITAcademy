#include "forest.h"
#include "tree.h"

Forest::Forest()
{
	std::cout << "Forest now: " << std::endl;
	wind();
}

Forest::Forest(Forest& forest)
{
	std::vector<std::string> _names = forest._names;
	
	
}

void Forest::growUP(const Tree& tree)
{
	 
	std::cout << "New tree: " << tree.getName() << std::endl;
	_names.push_back(tree.getName());
	
	wind();
	
}

void Forest::wind()
{
	if (!_names.empty()) // !_names == 0
	{
		for (int i = 0; i < _names.size(); i++)
		{
			std::cout << _names[i] << " id - " << i << std::endl;
		}
	}
	else if (_names.empty())  // _names == 0
	{
		std::cout << "Forest has not tree." << std::endl;
	}
}

void Forest::cutAll()
{

	_names.clear();
	std::cout << "Elements in vector: " << _names.size() << std::endl;

}

std::vector<std::string> Forest::getName()
{
	return _names;
}

Forest Forest::operator+(const Forest& f)
{

}









