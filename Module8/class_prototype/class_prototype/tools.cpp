#include "tools.h"

int Car::_counter = 0;

int Car::getSpeed()
{
	return _currentSpeed;
}

Car::Car()
{

}

Car::Car(std::string model): _model(model)
{

}

 void Car::start()
{
	 std::cout << _model << std::endl;
}