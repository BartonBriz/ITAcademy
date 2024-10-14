// Homework_16.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Sorttest.h"


int main()
{
    std::cout << "Hello it's home work 16 use STL shablon!\n";

    Sorttest sort;

    sort.addItem("Nick");
    sort.addItem("Bob");
    sort.addItem("Tim");
    sort.addItem("Jack");

    sort.sortPrint();
    std::cout << std::endl;
    std::cout << "Use iterator: \n";
    sort.sortList();

    std::cout << "--------Forward list-------" << std::endl;
    sort.sortForward();


}
