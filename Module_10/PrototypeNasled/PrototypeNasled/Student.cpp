#include "Student.h"


Student::Student(std::string name) : Human (name) //
{
}

void Student::Test()
{
	std::cout << getName() << std::endl;
	//setName("Grigoriy"); //use function class Human -> setName when he access "protected"
}

int Student::getGroup()
{
	return _group;
}
