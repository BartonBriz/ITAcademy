// Напишите C-style строку
// которая переворачивает её (изменяет порядок символов на обратный)

#include <iostream>
#include <cstring>

int main()
{
	char word[255]; // для ввода
	std::cin.getline(word, 255); // ввод word с 254 символами
	std::cout << "You write word: " << word << ", have long:  " << strlen(word) << std::endl;

	for (int i = strlen(word) - 1; i >= 0; i--)
	{
		std::cout << word[i];
	}
}

