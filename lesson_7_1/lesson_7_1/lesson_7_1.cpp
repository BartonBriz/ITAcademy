
#include <iostream>
#include <string>


void print(std::string str) // str - parametr
{
	std::cout << str << std::endl;
}
int sum(int* a, int* b)
{
	//*a = 222;
	return *a + *b;
	
}
int sum1(int &a, int &b)
{
	return a - b;
}

int main()
{
	print("hello"); // hello - argyment

	int value1 = 50;
	int value2 = 50;
	int result = sum(&value1, &value2);
	int result1 = sum1(value1, value2);
	std::cout << result << std::endl;
	std::cout << result1 << std::endl;
}

