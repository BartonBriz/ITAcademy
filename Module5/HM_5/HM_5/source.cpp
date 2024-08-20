#include "tools.h"

namespace Shapes {

	void printShape(Shape shape)
	{
		switch (shape)
		{
		case Shape::CIRCLE:
			std::cout << "CIRCLE" << ": he has number = " << Shape::CIRCLE << std::endl;
			break;
		case Shape::TRIANGLE:
			std::cout << "TRIANGLE" << ": he has number = " << Shape::TRIANGLE << std::endl;
			break;
		case Shape::SQUARE:
			std::cout << "SQUARE" << ": he has number = " << Shape::SQUARE << std::endl;
			break;
			default: std::cout << "Unknown:  " << Shapes::Unknown << std::endl;
			break;
		}
	}

}
