#pragma once
#include<string>
#include <iostream>
class Human 
{
public:
	Human(std::string name);
	void print();
	std::string getName();
protected:
	void setName(std::string name);
private:
	std::string _name;
};

