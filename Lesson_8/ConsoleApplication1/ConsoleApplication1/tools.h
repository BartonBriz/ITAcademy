#pragma once

#include <iostream>
#include <string>
class Book
{
public:
	Book(); // constructor classic
	Book(std::string title, std::string author, int year); //constructor this parametrs
	
	
	void setTitle(std::string title); 
	void setAuthor(std::string author);
	void setYear(int year);
	void printinfo();



	std::string getTitle();
	std::string getAuthor();
	int getYear();
	

protected:


private:
	std::string _title  ;
	std::string _author  ;
	int _year;
};
