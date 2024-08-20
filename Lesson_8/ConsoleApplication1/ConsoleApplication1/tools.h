#pragma once

#include <iostream>
#include <string>

/*class smallobj
{
public: 
	void showdata();
	void setdata(int d);

private:
	int somedata;

};
*/
class Book
{
public:

	//void print(std::string tit, std::string aut, int yea);


	
	void setTitle(std::string title) { _title = title; } // setter
	std::string getTitle()
	{
		std::cout << "Write Title: ";
		std::cin>> _title;
		std::cout << std::endl;
		return _title;
	} // getter
	std::string getAuthor() 
	{ 
		std::cout << "Write Author: ";
		std::cin>> _author;
		std::cout << std::endl;
		return _author; 
	} // getter
	void setAuthor(std::string author) { _author = author; } //setter
	int getYear() { 
		std::cout << "Write Year: ";
		std::cin >> _year;
		std::cout << std::endl;
		return _year; 
	} //getter
	void setYear(int year) { _year = year; }//setter

	void printinfo()
	{
		std::cout << "Title: " << _title << "\t" << "Author: " << _author << "\t" << "Year: " << _year << std::endl;
	}

protected:


private:
	std::string _title  ;
	std::string _author  ;
	int _year;
};
