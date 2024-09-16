#include "Human.h"



Human::Human(std::string name)
{
}

void Human::print()
{
	std::cout << getName() << std::endl;
}
void Human::setName(std::string name)
{
	_name = name;
	
}

std::string Human::getName()
{
	return _name;
}
