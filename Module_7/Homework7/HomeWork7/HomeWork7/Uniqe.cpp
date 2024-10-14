#include "Toolsfunc.h"
void Uniqeptr()
{

	std::unique_ptr<int[]> u_ptr = std::make_unique<int[]>(10);
	int n;
	std::cout << u_ptr << std::endl;
	std::cout << &u_ptr << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << u_ptr[i];
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "val " << i << " : ";
		std::cin >> n;
		u_ptr[i] = n;
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << u_ptr[i];
		std::cout << "\n";
	}
}