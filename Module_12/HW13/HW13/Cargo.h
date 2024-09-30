#pragma once
#include <iostream>
#include <string>

class Cargo
{
public:
	Cargo(std::string name, std::string vin);
	std::string getName() const;
	std::string getVin() const;
protected:
private:
	std::string _name;
	std::string _vin;

};

