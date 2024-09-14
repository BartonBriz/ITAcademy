#pragma once
#include<string>
#include "Human.h"

class Student : public Human
{
public:
	Student(std::string name);
	void Test();
	int getGroup();
protected:
private:
	
	int _group = 0;
};

