#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
#include <forward_list>

class Sorttest
{
public:
	void addItem(std::string name);
	void sortPrint();
	void sortList();
	void sortForward();


private:
	std::list <int> val{ 17,5,3,8,20,6,8,3 };
	std::forward_list<int> fval{ 11,5,3,7,31,6,8,3 };
	std::vector<std::string> _vecSort;
	std::vector<int> _vecIntS{ 1,2,3,4,5,6,3,6,37,3,2,7,4,7,9,9,4,2,1,15,14 };
	Sorttest* next; // node ptr next
	Sorttest* end;  // node ptr end


};


