#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    int fact = 1;
    cout << "Введите факториал: ";
    cin >> a;
    if (a < 0)
    {
        cout << " Факториал не может быть меньше 0!" << endl;
        return 0;
    }
    else if (a == 0)
    {
        cout << "Факториал нуля равен 1.";
    }
    else if (a > 1)
    {
        for (int i = 1; i <= a; i++)
        {
            fact = fact * i;

        }
        cout << "Факториал равен: " << fact << endl;
    }
}