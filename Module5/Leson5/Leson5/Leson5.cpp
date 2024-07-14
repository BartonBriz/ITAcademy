// local variables
// use namespace
// use enum
#include <iostream>

/*int countColls()
{
    static int call = 0; // 1-time
    call++;
    return call;
}
*/
/*
namespace tools
{
    namespace arithm
    {
        int Sum(int a, int b)
        {
            return a + b;
        }
    }
} // end of tools
*/

// use enum class
/*
enum class Color {
    Unknown = -1, // base standart 
    RED = 3,
    GREEN,
    BLUE
}; // strict type
*/
int main()
{
    int number1[25]; // initiliz massiv
    int number14[]{ 1,2,3,4 }; // initiliz massiv

    /*Color color = Color::RED; // create type "color"
    // std::cout << color << std::endl;
    int colorInt = static_cast<int>(color);  // transformation
    std::cout << colorInt << std::endl;
    int a = 5;
    decltype(a) b = 15.6; //
    std::cout << b << std::endl;
    switch (color)
    {
    case Color::Unknown:
       // std::cout << Color::Unknown << std::endl;
        break;
    case Color::RED:
        //std::cout << Color::RED << std::endl;
        break;
    case Color::GREEN:
        break;
    case Color::BLUE:
        break;
    default:
        break;
    }
    */
    return 0;

    // use namespace
   /* int val1 = 10;
    int val2 = 20;

    std::cout<<tools::arithm::Sum(10, 20); // visibility function
    return 0;
    */

    // use static type
    /*
    int res = 0;
    res = countColls();
    std::cout << res << std::endl;
    res = countColls();
    std::cout << res << std::endl;
    return 0;
    */
}
