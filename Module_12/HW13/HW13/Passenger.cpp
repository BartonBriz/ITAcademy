#include "Passenger.h"

Passenger::Passenger(std::string name, std::string vin)
{
	_name = name;
	_vin = vin;
	std::cout << "legkovoi" << std::endl;
}

std::string Passenger::getName()const
{
	return _name;
}

std::string Passenger::getVin()const
{
	return _vin;
}
