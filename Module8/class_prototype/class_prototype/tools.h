#pragma once
#include <iostream>
#include <string>

class Car
{
public:
	static int _counter;
	int length = 0;
	void start();
public:   //modifine
	Car(); // metods
	Car(std::string model); //metods

public:
	std::string name() const; // metods
	int getSpeed(); // metods
	/*
	Car operator+(const Car& car)
	{
		return Car(name() + car.name());
	}
	*/
protected:
	
private:
	int _currentSpeed = 0; // fild
	//std::string _model; // fild
	std::string _model;
	

};