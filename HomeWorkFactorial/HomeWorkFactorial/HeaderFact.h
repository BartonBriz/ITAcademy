#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    int fact = 1;
    cout << "������� ���������: ";
    cin >> a;
    if (a < 0)
    {
        cout << " ��������� �� ����� ���� ������ 0!" << endl;
        return 0;
    }
    else if (a == 0)
    {
        cout << "��������� ���� ����� 1.";
    }
    else if (a > 1)
    {
        for (int i = 1; i <= a; i++)
        {
            fact = fact * i;

        }
        cout << "��������� �����: " << fact << endl;
    }
}