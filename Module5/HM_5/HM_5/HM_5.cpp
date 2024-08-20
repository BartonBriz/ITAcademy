#include "tools.h"
#include "HM_5.h"

int main()
{
	// проверка ввывода в консоли
	Shapes::printShape(Shapes::CIRCLE);
	Shapes::printShape(Shapes::TRIANGLE);
	Shapes::printShape(Shapes::SQUARE);
	// обьявление переменных
	Shapes::Shape t_shape = Shapes::Shape::CIRCLE;
	Shapes::Shape t_shape1 = Shapes::Shape::TRIANGLE;
	Shapes::Shape t_shape2 = Shapes::Shape::SQUARE;

	Shapes::Shape result{}; // записать результат со строки
	std::string name;
	std::string message1{ "circle"};
	std::string message2{ "square"};
	std::string message3{ "triangle" };
	std::cout << "Input name Shape: " ;
	getline(std::cin, name); // getline принимает два объекта - std::cin и переменную, в которую надо считать строку.
	if (name == message1)
	{
		std::cout << message1 << " Yes!" << std::endl;
		t_shape = result; // присваивание 
	}
	else if (name == message2)
	{
		std::cout << message2 << " Yes!" << std::endl;
		t_shape1 = result;
	}
	else if (name == message3)
	{
		std::cout << message3 << " Yes!" << std::endl;
		t_shape2 = result;
	}
	std::cout<< "result: " << result << std::endl;
}

