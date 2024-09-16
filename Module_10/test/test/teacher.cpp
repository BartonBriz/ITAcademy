#include "human.h"
#include "teacher.h"
#include "student.h"


std::string Teacher::getTeacher() const
{
    return _teacher;
}

void Teacher::print()
{
    std::cout << "My name: " << getFName() << " " << getLName() << std::endl;
    std::cout << "I " << getTeacher()  << std::endl;
    std::cout << "I teach in group:  ";
    
}
