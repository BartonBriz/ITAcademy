#pragma once
#include "human.h"
class Student : public Human
{
public:
	
	Student(std::string fname, std::string lname, int group) : _group(group), Human{ lname, fname } {};
	void print();
	void printGroup();
	int getGroup();
	void setGroup(int group);
protected:
private:

	int _group = 0;
};

