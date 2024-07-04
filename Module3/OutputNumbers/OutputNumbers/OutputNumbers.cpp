/*
* Вводим число 
* Выводим от меньшего разряда к большему
*/

#include "Tools.h"

int main()
{
    unsigned int num;
    int k ;  // разряд
    std::cin >> num;
    std::cout << num << std::endl;

    while (num != 0)
    {
        k = num % Drob; // получение разряда
        num /= Drob;
        std::cout << k << " ";
        
    }
    return 0;
}


