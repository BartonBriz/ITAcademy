
#include "tools.h"

int main()
{
	int arr1{ 10 };
	std::shared_ptr<int[]> s_ptr = std::shared_ptr<int[]>(new int[10]);
	int n1;
	int result = 0;
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








	//unique();
	//shared();

	/*for (int i = 0; i < 10; i++)
	{
		std::cout << "Vedite chislo: ";
		std::cin >> n;
		arr[i] = n;
	}
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Element " << i << " = " << arr[i] << std::endl;
	}
	*/
}

