#include "Tools.h"
/*
* Programm output multiplication table
* Use cycle for  release
*/
int main()
{
    for (int i = 0; i <= 10; i++)
    {
        std::cout << std::endl;
        for (int j = 0; j <= 10; j++)
        {
            std::cout << i * j << "\t";
        }
    }
}


