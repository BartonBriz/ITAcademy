#pragma once
#include <iostream>
#include <vector>

class Tree;


class Forest
{
public:
	Forest();
	Forest(Forest& forest);
	void growUP(const Tree& tree); // add tree in the forest
	void wind();
	void cutAll(); // clear forest
	std::vector<std::string> getName();
	Forest operator+(const Forest& f); // i don't know 
	
protected:
private:
	std::vector<std::string> _names{ "Elka", "Dub", "Klen" };
	std::string _treeUp;
};