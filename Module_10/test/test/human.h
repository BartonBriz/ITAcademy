#pragma once
#include <iostream>
#include <string>
class Human
{ 
public:
	
	Human(std::string fname, std::string lname);
	void print();

	std::string getFName();
	std::string getLName();
	int getAge();
	void setAge(int age);
protected:
private:
	std::string _fname; //first name
	std::string _lname;	// last name
	int _age = 0;
};

