
#include "Human.h"
#include "Student.h"

int main()
{

    auto hum = new Human("Vlad");
  
    auto st = new Student("Petr");
    st->Test();
    /*st->Test();
    st->print();
   // st->setName("Ivan"); // setName have access protected!
    st->print();
   */
    
}

