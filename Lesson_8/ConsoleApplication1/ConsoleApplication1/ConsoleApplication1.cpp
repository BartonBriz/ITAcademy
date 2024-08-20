
#include "tools.h"

int main()
{
    std::cout << "Hello World!\n";
    /*smallobj s1, s2;
    s1.setdata(5);
    s2.setdata(43);
    s1.showdata();
    s2.showdata();
    */

    Book print1 ,print2;

    print1.setTitle("C++");
    print1.setAuthor("Straups");
    print1.setYear(2019);

   
    print2.getTitle();
    print2.getAuthor();
    print2.getYear();

    std::cout << "Print1: ";
    print1.printinfo();
    std::cout << "Print2: ";
    print2.printinfo();
    return 0;
}
