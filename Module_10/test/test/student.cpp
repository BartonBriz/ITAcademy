#include "student.h"




void Student::print()
{
    std::cout << "I: " << getFName() << " " << getLName() << "\n" << "Me age: " << getAge()
        << "\n " << "I student the group: " << getGroup();
}

int Student::getGroup()
{
    return _group;
}

void Student::setGroup(int group)
{
    _group = group;
   
}
