
#include "Lamda.h"
#include "Circle.h"
#include <string>
#include "InvalidRadius.h"
#include "NullRadius.h"
/// <summary>
/// Work lamda function
/// Use try-catch
/// </summary>
/// <param name="n"> write person console </param>
/// <returns></returns>
int main()
{
    Lamda* vector = new Lamda{};
    vector->Even(); // output even numbers vector
    std::cout << std::endl;
    vector->Sum(); // output summary elements vectors
    std::cout << std::endl;
    vector->Factor(); // output elements vector * value (factor)
    std::cout << std::endl;
    vector->~Lamda();

    double n;
    std::cout << std::endl;
    std::cout << "Write R circle: ";
    std::cin >> n;
    Circle circle{ n };
    try
    {
        circle.calculateArea(n);
    }
    catch (const InvalidRadius* err)
    {
        std::cout << "You write n < 0, radius can't < 0!" << std::endl;
    }
    catch (const NullRadius* err)
    {
        std::cout << "Radius by zero !" << std::endl;
    }
    return 0;
}

