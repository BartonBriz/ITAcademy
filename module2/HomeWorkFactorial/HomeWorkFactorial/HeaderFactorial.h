#include <iostream>

using namespace std;

int main()
{
    
    int a;
    int fact = 1;
    cout << "Vvedite chislo: ";
    cin >> a;
    if (a < 0)
    {
        cout << " Factorial ne mojet bit' men'she 0!" << endl;
        return 0;
    }
    else if (a == 0)
    {
        cout << "Factorial null raven 1.";
    }
    else if (a > 1)
    {
        for (int i = 1; i <= a; i++)
        {
            fact = fact * i;

        }
        cout << "Factorial: " << fact << endl;
    }
}