#pragma once
#include <iostream>
#include <string>
namespace Shapes
{
	// обьявление перечисление фигур
	enum Shape
	{
		Unknown = -1,
		CIRCLE,
		SQUARE,
		TRIANGLE
	};
	void printShape(Shape shape);
}



