#include "tools.h"

int Vector1(int n)
{
    std::vector<int> v(n); //создание вектора c n - €чейками
    std::cout << "Vivod Do sortirovki: " << "\n";
    for (int i = 0; i < v.size(); i++)
    {
        v[i] = rand() % 101;
    }
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << "\n";
    }
    std::cout << "+++++++++++++++++++++++++++++" << std::endl;
    std::cout << "Vivod Posle sortirovki: " << std::endl;
    sort(v.begin(), v.end()); // сортировка 
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << "\n";
    }
    return 0;
}