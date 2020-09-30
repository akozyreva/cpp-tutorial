#include "square_utils.hpp"
#include <iostream>
void square(int a)
{
    std::cout << a * a << "\n";
}
void square(double a)
{
    std::cout << a * a << "\n";
}
void square(int a, int b)
{
    std::cout << a * b << "\n";
}
void square(double a, double b)
{
    std::cout << a * b << "\n";
}