// unique_ptr

#include "tools.h"

void unique()
{
	int arr{ 10 }; // size massiv
	std::unique_ptr<int[]> ptr = std::make_unique<int[]>(arr); // obyavlenie ykazatelya s razmerom arr
	int n; // vvod polzovatelskih dannix
	for (int i = 0; i < arr; i++)
	{
		std::cout << "Vedite chislo: ";
		std::cin >> n;
		ptr[i] = n;
	}
	for (int i = 0; i < arr; i++)
	{
		std::cout << "Element " << i << " = " << ptr[i] << std::endl;
	}
}
