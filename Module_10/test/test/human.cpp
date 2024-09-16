#include "human.h"


Human::Human(std::string fname, std::string lname)
{
    _fname = fname;
    _lname = lname;
}

void Human::print()
{
    std::cout << "My name: " << _fname << " " << _lname << std::endl;
    if (_age <= 0)
    {
        std::cout << "you not write age." << std::endl;
    }
    else
    std::cout << "Me " << _age << " " << "age " << std::endl;
}

std::string Human::getFName()
{
    return _fname;
}

std::string Human::getLName()
{
    return _lname;
}

int Human::getAge()
{
    return _age;
}

void Human::setAge(int age)
{
    _age = age;
}
