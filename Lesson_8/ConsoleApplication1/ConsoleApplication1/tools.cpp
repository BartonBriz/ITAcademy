#include "tools.h"



Book::Book() // classic methods
{
	
}
Book::Book(std::string title, std::string author, int year)
{
	_author = author;
	_title = title;
	_year = year;
	std::cout << "Constructor closed!" << std::endl;
}

void Book::setTitle(std::string title) // setter
{
	_title = title;
}

std::string Book::getTitle() //getter
{
	return _title;
}

void Book::setAuthor(std::string author)
{
	_author = author;
}

std::string Book::getAuthor()
{
	return _author;
}

void Book::setYear(int year)
{
	_year = year;
}

int Book::getYear()
{
	
		return _year;
}

void Book::printinfo()
{
	std::cout << "Title: " << _title << "\t" << "Author: " << _author << "\t" << "Year: " << _year << std::endl;
}

