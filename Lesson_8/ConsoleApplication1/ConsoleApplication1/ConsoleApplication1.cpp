// 
#include "tools.h"

int main()
{
    Book printClassic("Java", "Ketti", 2018);
    Book print1, print2;

    printClassic.printinfo(); // use constructor

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
