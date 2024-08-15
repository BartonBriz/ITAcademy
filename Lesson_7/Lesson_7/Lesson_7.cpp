// Lesson_7.cpp : Ymnie ykazateli

#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>

int main()
{
    std::cout << "Hi" << std::endl;
    {
        int *a = new int; // 8bit ykazat + 4bit int
        *a = 555;
        delete a; //clean cache
    }
     //smart pointer
    {
        int* a_ptr = new int;
        *a_ptr = 35;
        int* b_ptr = a_ptr;

        *b_ptr = 45;
        std::cout << *a_ptr << std::endl; // output 45
        // ================
        std::unique_ptr<int> un_ptr = std::make_unique<int>(); // clean cache
        *un_ptr = 25;  // clean cache
        std::cout << *un_ptr << std::endl;

        std::unique_ptr<int> un_ptr2 = std::move(un_ptr); // f_move-swap un_ptr in ptr2, and un_ptr not active!
        std::cout << *un_ptr2 << std::endl;
       // std::cout << *un_ptr << std::endl; //00000000000000000000000
    }

    {
        std::shared_ptr<int> sh_ptr = std::make_shared<int>(); // make_shared() - new cache
        *sh_ptr = 50;
        std::cout << "Sh_ptr " << std::endl;
        std::cout << *sh_ptr << " " << sh_ptr.use_count() << std::endl; // use_count() - chechik
        {
            std::shared_ptr<int> sh_ptr1 = sh_ptr;
            std::cout << "Sh_ptr " << std::endl;
            std::cout << *sh_ptr << " " << sh_ptr.use_count() << std::endl;
            std::cout << "Sh_ptr1 " << std::endl;
            std::cout << *sh_ptr1 << " " << sh_ptr1.use_count() << std::endl;

            std::cout << "Weak_ptr " << std::endl;
            std::weak_ptr<int> w_ptr1 = sh_ptr1;
            std::cout << *sh_ptr1 << " " << sh_ptr1.use_count() << std::endl;

            auto sh_ptr_new = w_ptr1.lock();
            std::cout << "Weak_ptr -> shared " << std::endl;
            std::cout << *sh_ptr << " " << sh_ptr.use_count() << std::endl;
        }
        std::cout << "============" << std::endl;
        std::cout << *sh_ptr << " " << sh_ptr.use_count() << std::endl; 

    }

    std::cout << "=================" << std::endl;
    int a = 10;
    int b = 20;
    
    int& ref_a = a;
    int& ref_aa = a;
    int& ref_b = b;

    ref_aa = 25;
    std::cout << a << std::endl;

    ref_aa = ref_b;
    std::cout << a << std::endl;

 

    



}
