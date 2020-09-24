#include <iostream>
#include <cmath>

using std::cout;

int main()
{
    // sqrt -25 returns -nan - not a number
    cout << sqrt(-25) << "\n";
    // if number is too big, it shows inf
    cout << pow(9, 999) << "\n";
    // negative inf
    cout << pow(-9, 999) << "\n";
    cout << "Showing inifinity and nan themselves" << "\n";
    cout << INFINITY << "\n";
    cout << NAN << "\n";
    float a = NAN;
    cout << "Assigning variable as nan returns nan" << "\n";
    cout << a << "\n";
    // module left example
    cout << "Module left example" << "\n";
    cout << 10 % 3 << "\n";
    cout << 10 % 2 << "\n";
    cout << "With floating use reminder instead" << "\n";
    cout << remainder(10, 3.25) << "\n";
    cout << "Fmod returns the highest arg" << "\n";
    cout << fmax(10, 3.25) << "\n";
    cout << "Fmin returns the minimal arg" << "\n";
    cout << fmin(10, 3.25) << "\n";
    cout << "Rounds x upward, returning the smallest integral value "
        << "that is not less than x." << "\n";
    cout << ceil(3.25) << "\n";
    cout << "Drop off decimal value" << "\n";
    cout << floor(8.70) << "\n";
    cout << "With negative numbers floor returns maximal low value, "
        << "but trunc drop off decimal" << "\n";
    cout << floor(-1.5) << " " << trunc(-1.5) << "\n";
    cout << "Round function - Returns the integral value that is nearest to x, "
        << "with halfway cases rounded away from zero." << "\n";
    cout << round(-1.9) << "\n";
}
