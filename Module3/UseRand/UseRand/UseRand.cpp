
#include "Tools.h"
#include "Function.cpp"

int main()
{
    int Number[11]; // длина массива 
    int Player1 = 0;
    int Player2 = 0;
    Srand;
    for (int i = 0; i <= 50; i++)
    {
        Number[10] = Rand% 11 - 5; // диапозон от -5 до 5
        Player1 += Number[10];
        std::cout << Number[10]  << std::endl;
    }
    std::cout << "Score: " << Player1 << std::endl;
    std::cout << "\t" << std::endl;
    for (int j = 0; j <= 50; j++)
    {
        Number[10] = Rand% 11 - 5; // диапозон от -5 до 5
        Player2 += Number[10];
        std::cout << Number[10] << std::endl;
    }
    std::cout << "Score: " << Player2 << std::endl;
        if (Player1 > Player2)
        {
            std::cout << "Win Player1 Score: " << Player1 << std::endl;
        }
        else if (Player2 > Player1)
        {
            std::cout << "Win Player2 Score: " << Player2 << std::endl;
        }
        else if (Player1 == Player2)
        {
            return 0;
        }
}

