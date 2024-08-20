// вектор из n элементов 
// заполняет его случайными числами от 1 до 100
// Сортирует вектор в порядке возрастания

#include "tools.h"

int main()
{
    srand(time(NULL));
    int n;
    std::cout << "Vvedite kolichestvo yacheek vectora: ";
    std::cin >> n;

    Vector1(n);
}

