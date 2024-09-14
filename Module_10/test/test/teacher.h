#pragma once
#include "human.h"
#include "student.h"
class Teacher : public Human 
{
public:
	Teacher(std::string fname, std::string lname, int group) : Human(lname, fname){};
	std::string getTeacher() const;
	void printf();
protected:
private:
	std::string _teacher = "Teacher";
};

