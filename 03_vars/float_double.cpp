#include <iostream>
// for defining, how many numbers in decimal part we can trust
#include <float.h>

using std::cin;
using std::cout;

int main()
{
    // you can trust double more than float
    // in most cases double is better
    float a = 10.0 / 3;
    double b = 7.7E4; // 7.7 * 10^4 as in excel!
    long double c;

    cout << b << "\n";
    cout << a << "\n";
    // if you want to see fixed value
    cout << std::fixed << b << "\n";
    cout << a * 10000000000000 << std::endl; // precision depends on memory
    cout << FLT_DIG << std::endl;            // 6 - we can trust only 6 digits!
    cout << DBL_DIG << std::endl;
}