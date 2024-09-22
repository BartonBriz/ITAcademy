#pragma once
#include "Tree.h"
class Dub : public Tree
{
public:
	Dub(std::string name, std::string vid);
	// if not use smart pointers, automatic use destructor
	~Dub();  
	void wind() override;
protected:
private:

};

