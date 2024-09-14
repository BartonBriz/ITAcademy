#include "teacher.h"
#include "student.h"


std::string Teacher::getTeacher() const
{
    return _teacher;
}

void Teacher::printf()
{
    std::cout << "I " << getTeacher()  << std::endl;
    
    
}
