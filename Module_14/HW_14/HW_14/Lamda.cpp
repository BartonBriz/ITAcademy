#include "Lamda.h"

Lamda::Lamda()
{
    for (int i = 10; i < 51; i++)
    {
        _vect.push_back(i);
    }
}

Lamda::~Lamda()
{
    std::cout << "Deleted constructor." << std::endl;
}

void Lamda::Even()
{
    auto even = [](int n)
        {
            if (n % 2 == 0)
            {
                std::cout << "Even numbers: " << n << std::endl;
            }
        };
    for (const auto& neven : _vect)
    {
        even(neven);
    }

}

void Lamda::Sum()
{
    int summary = 0;

    auto sum = [&summary](int n)
        {
            summary += n;
        };

    for (const auto& summa : _vect)
    {
        sum(summa);
    }
    std::cout << "Sum numbers vectro: " << summary << std::endl;

}

void Lamda::Factor()
{
    int nfactor = 3;
    auto factory = [&nfactor](int n)
        {
            std::cout << "Use val factor on numbers vector: " << nfactor * n << std::endl;
        };
    for (const auto& nvect : _vect)
    {
        factory(nvect);
    }
}