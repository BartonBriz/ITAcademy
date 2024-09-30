#include "Cargo.h"

Cargo::Cargo(std::string name, std::string vin)
{
	_name = name;
	_vin = vin;
	std::cout << "Truck" << std::endl;
}

std::string Cargo::getName() const
{
	return _name;
}

std::string Cargo::getVin() const
{
	return _vin;
}
