#include "Circle.h"
Circle::Circle(double R) : _R(R)
{
}

void Circle::calculateArea(double r)
{
	if (r > 0)
	{
		double pi = M_PI;
		std::cout << "Now output S = pi * R^2 : " << std::endl;
		double s = 0;
		s = pi * pow(r, 2);
		std::cout << "S circle =  " << s << std::endl;
	}
	else if (r < 0)
	{
		throw new InvalidRadius();
	}
	else if (r == 0)
	{
		throw new NullRadius();
	}
}

