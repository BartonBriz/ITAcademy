#include "Toolsfunc.h"

void Sharedptr()
{
	std::shared_ptr<int[]> s_ptr(new int[10]());
	int n;

	for (int i = 0; i < 10; i++)
	{
		std::cout << "write val " << i << ": ";
		std::cin >> n;
		s_ptr[i] = n;
	}
	for (int i = 0; i < 10; i++)
	{
		std::cout << s_ptr[i] << std::endl;
	}
	std::cout << "COUNT: " << s_ptr.use_count() << std::endl;
	std::weak_ptr<int[]> w_ptr1 = s_ptr;
	std::cout << "summa: " << summ(w_ptr1) << std::endl;
	std::pair<int, int> values = findMinMax(w_ptr1);
	std::cout << "Max: " << values.first << " and Min: " << values.second << std::endl;

}
int summ(std::weak_ptr<int[]> weak)
{
	auto sharlock = weak.lock();
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += sharlock[i];
	}
	return sum;
}
std::pair<int, int> findMinMax(std::weak_ptr<int[]> weak)
{
	auto sharlock = weak.lock();
	int max, min;
	max = sharlock[0];
	min = sharlock[0];
	for (int i = 0; i < 10; i++)
	{
		if (sharlock[i] < min)
		{
			min = sharlock[i];
		}

	}
	for (int i = 0; i < 10; i++)
	{
		if (sharlock[i] > max)
		{
			max = sharlock[i];
		}
	}
	return  std::make_pair(max, min);
}
