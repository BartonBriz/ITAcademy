#include "Tools.h"

int main()
{
    unsigned int num;
    int k;              // разряд
    std::cin >> num;
    std::cout << num  << std::endl;

    while (num != 0)
    {
        k = num % 10; // получение разряда
        num /= 10;
        std::cout << k << " ";
    }
   
    
}


