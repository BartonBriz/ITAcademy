#pragma once
#include <string>
#include <iostream>
class Passenger
{
public:
	Passenger(std::string name, std::string vin);
	std::string getName() const;
	std::string getVin() const;
protected:
private:
	std::string _name;
	std::string _vin;

};

