// shared_ptr


#include "tools.h"

void shared()
{
	int arr1{ 10 };
	std::shared_ptr<int[]> s_ptr = std::shared_ptr<int[]>(new int[10]);
	int n1;
	int result{};
	for (int i = 0; i < arr1; i++)
	{
		std::cout << "Vedite chislo: ";
		std::cin >> n1;
		s_ptr[i] = n1;
	}
	for (int i = 0; i < arr1; i++)
	{
		result += s_ptr[i];
	}
	std::cout << result << std::endl;



}
