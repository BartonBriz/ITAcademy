#include "Sorttest.h"

void Sorttest::addItem(std::string name)
{
	_vecSort.push_back(name);
}

void Sorttest::sortPrint()
{
	std::cout << "No use sort: " << std::endl;
	for (const auto& vec : _vecSort)
	{
		std::cout << vec << " ";
	}
	std::cout << std::endl;
	std::cout << "Use std::sort: ";
	std::sort(_vecSort.begin(), _vecSort.end());
	for (const auto& vec : _vecSort)
	{
		std::cout << vec << " ";
	}
	std::cout << std::endl;
	std::cout << "No use stable sort: " << std::endl;
	for (const auto& vec : _vecIntS)
	{
		std::cout << vec << " ";
	}
	std::cout << std::endl;
	std::cout << "Use std::stable_sort: ";
	std::stable_sort(_vecIntS.begin(), _vecIntS.end());
	for (const auto& vec : _vecIntS)
	{
		std::cout << vec << " ";
	}
	std::cout << std::endl;
	std::cout << "Use std::partial_sort: ";
	std::partial_sort(_vecIntS.begin(), _vecIntS.begin() + 8, _vecIntS.end());
	for (const auto& vec : _vecIntS)
	{
		std::cout << vec << " ";
	}
}

void Sorttest::sortList()
{
	std::list<int>::iterator myiter = val.begin(); // prt the first element list 

	while (myiter != val.end())
	{
		std::cout << "no sort " << *myiter << std::endl;
		myiter++;
	}
	std::cout << "Size list: " << val.size() << std::endl;
	val.sort(); // sort list
	myiter = val.begin();
	while (myiter != val.end())
	{
		std::cout << *myiter << " sort();" << std::endl;
		myiter++;
	}

}

void Sorttest::sortForward()
{
	auto mylist = fval.begin(); // ptr the first element 
	auto endlist = fval.end(); // ptr the end element
	while (mylist != endlist)
	{
		std::cout << "forward list: " << *mylist << std::endl;
		mylist++;
	}
	std::cout << "Use max_size(): " << fval.max_size() << std::endl; // all size list
	fval.sort();

	auto fsrtlist = fval.begin();
	auto endslist = fval.end();
	while (fsrtlist != endslist)
	{
		std::cout << "forward sort: " << *fsrtlist << std::endl;
		fsrtlist++;
	}
	/*for (auto i = fval.begin(); i != fval.end(); i++)
	{
		std::cout << "sort forward: " << *i << std::endl;
	}
	*/
}