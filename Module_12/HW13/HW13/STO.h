#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Passenger.h"
#include "Cargo.h"

template <typename S>
class STO
{
public:

	void AddCar(const S& car)
	{
		if (_cars.size() < 5)
		{
			std::cout << "you can also add a car." << std::endl;
			_cars.push_back(car);
		}
		if (_cars.size() > 5)
		{
			std::cout << "The service station is overcrowded.";
		}
	}
	void pritn() const
	{
		std::cout << "All Car " << "\n";
		for (const auto& car : _cars)
		{
			std::cout << "Marka: " << car.getName() << "\n" << "Vin number: " << car.getVin() << std::endl;
		}

		std::cout << "Now cars in STO: " << _cars.size() << std::endl;
	}
	void repairAll(const S&)
	{
		std::cout << "Repair cars in STO: ";
		_cars.clear();
		std::cout << _cars.size() << std::endl;
	}



protected:
private:

	std::vector<S> _cars;
};

