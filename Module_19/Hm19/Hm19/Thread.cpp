#include <iostream>
#include <vector>
#include <thread>
#include <mutex>
#include <cstdlib>
#include <ctime>

std::mutex mtx_sum, mtx_max, mtx_min;

int sum = 0;
int max_value = 0;
int min_value = 100;

void calculate_sum(const std::vector<int>& arr) {
    int local_sum = 0;
    for (int num : arr) {
        local_sum += num;
    }

    std::lock_guard<std::mutex> lock(mtx_sum);
    sum = local_sum;

    // Attempt to modify max_value from another thread while sum is locked
    std::this_thread::sleep_for(std::chrono::milliseconds(200));
    if (mtx_max.try_lock()) {
        max_value += 10;
        std::cout << "max_value modified in calculate_sum." << std::endl;
        mtx_max.unlock();
    }
    else {
        std::cout << "\nError: max_value is locked by another thread (calculate_sum)." << std::endl;
    }
}

void find_max(const std::vector<int>& arr) {
    int local_max = arr[0];
    for (int num : arr) {
        if (num > local_max) {
            local_max = num;
        }
    }

    std::lock_guard<std::mutex> lock(mtx_max);
    max_value = local_max;

    // Attempt to modify sum from another thread while max_value is locked
    std::this_thread::sleep_for(std::chrono::milliseconds(200));
    if (mtx_sum.try_lock()) {
        sum += 10;
        std::cout << "sum modified in find_max." << std::endl;
        mtx_sum.unlock();
    }
    else {
        std::cout << "\nError: sum is locked by another thread (find_max)." << std::endl;
    }
}

void find_min(const std::vector<int>& arr) {
    int local_min = arr[0];
    for (int num : arr) {
        if (num < local_min) {
            local_min = num;
        }
    }

    std::lock_guard<std::mutex> lock(mtx_min);
    min_value = local_min;
}

int main() {
    srand(time(0));

    std::vector<int> arr(100);
    for (int& num : arr) {
        num = rand() % 100 + 1;
    }

    std::cout << "Array elements: ";
    for (const int& num : arr) {
        std::cout << num << " ";
    }
    std::cout << "\n\n";

    std::thread t1(calculate_sum, ref(arr));
    std::thread t2(find_max, ref(arr));
    std::thread t3(find_min, ref(arr));

    t1.join();
    t2.join();
    t3.join();

    std::cout << "\nSum of elements: " << sum << std::endl;
    std::cout << "Maximum element: " << max_value << std::endl;
    std::cout << "Minimum element: " << min_value << std::endl;

    return 0;
}