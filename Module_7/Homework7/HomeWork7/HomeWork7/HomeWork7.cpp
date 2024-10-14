#include "Toolsfunc.h"


/// <summary>
/// use smart pointers 
/// when person write keyboard value
/// and outpout function on smart pointers
/// </summary>
/// <returns></returns>
int main()
{
	std::cout << " -------Sharedptr------- " << std::endl;
	Sharedptr();
	std::cout << " -------Uniqerptr------- " << std::endl;
	Uniqeptr();
}
