#include "student.h"




void Student::print()
{
    std::cout << "I: " << getFName() << " " << getLName() << "\n" << "Me age: " << getAge() << std::endl;
    if (Student::getFName && Student::getLName && Student::getGroup )
    {
        std::cout << "I student the group: " << getGroup() << std::endl;
    }
   }

void Student::printGroup()
{
    std::cout << getGroup() << std::endl;
}

int Student::getGroup()
{
    return _group;
}

void Student::setGroup(int group)
{
    _group = group;
   
}
