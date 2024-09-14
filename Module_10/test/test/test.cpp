

#include "human.h"
#include "student.h"
#include "teacher.h"

int main()
{
    auto n = new Human ("Michael", "Barton");
    n->print();
    n->setAge(23);
    n->print();

    auto st = new Student("Vlad" , "Krachevskiu", 234565);
    st->setAge(33);
    st->print();

    
}

