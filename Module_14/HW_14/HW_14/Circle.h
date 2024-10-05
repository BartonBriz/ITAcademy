#pragma once
#define _USE_MATH_DEFINES // use val (M_PI)
#include <iostream>
#include <math.h>
#include <algorithm>
#include "InvalidRadius.h"
#include "NullRadius.h"

class Circle
{
public:
	Circle(double R);
	void calculateArea(double r);

protected:
private:
	int _R;
};
