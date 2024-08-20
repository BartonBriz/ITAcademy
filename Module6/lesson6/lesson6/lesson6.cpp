// lesson 6
// Указатели

#include <iostream>

int main()
{
	const int a = 10;
	const int c = 30;

	int b = 20;
	b = 5;

	int* p_b = &b;
	std::cout << b << std::endl;
	const int* p_a = &a;
	int const* p_a2 = &a;

	std::cout << typeid(p_a).name() << std::endl;
	std::cout << typeid(p_a2).name() << std::endl;


}

