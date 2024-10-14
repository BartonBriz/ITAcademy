#pragma once
#include <iostream>
#include <memory>
#include <utility> // std::pair


void Uniqeptr();
void Sharedptr();
int summ(std::weak_ptr<int[]> weak);
std::pair<int, int> findMinMax(std::weak_ptr<int[]> weak);