#pragma once
#include "human.h"
#include "student.h"

class Teacher : public Human , public Student
{
public:
	Teacher(std::string fname, std::string lname, int group) : Human{ lname, fname }, Student{ group } {};
	std::string getTeacher() const;
	void print();
protected:
private:
	std::string _teacher = "Teacher";
};

