#pragma once
#include "Tree.h"

class Sosna : public Tree
{
public:
	Sosna(std::string name, std::string vid);
	void wind() override;
};

