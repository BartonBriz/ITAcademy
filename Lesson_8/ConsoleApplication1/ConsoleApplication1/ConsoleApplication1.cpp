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

    std::cout << "Print1: " << std::endl;
    print1.printinfo();
   // print2.getAuthor() = "Josh"; 
   // no valid
    // print2.getTitle() = "C#"; 
    // no valid
    //print2.getYear() = -2000; 
    // no valid
   
    return 0;
}
