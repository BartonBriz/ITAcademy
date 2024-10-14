#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono> // time point, clock, time duration
#include <ctime>
#include <thread>
#include "Status.h"

class Order
{
public:
    Order(int num, double amount, Status status);

    void printOrder()const;
    void Checkorder(const Order& b);
private:
    int orderNumber;
    double orderAmount;
    Status orderStatus;
    std::chrono::system_clock::time_point orderDate;
    std::vector<Order>order;
};

