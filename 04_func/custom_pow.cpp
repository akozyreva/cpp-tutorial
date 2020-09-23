#include <iostream>

using std::cin;
using std::cout;

// function definition
double power(double, int);

int main()
{
    int base, exponent;
    cout << "What is the base? :";
    cin >> base;
    cout << "What is exponent? :";
    cin >> exponent;
    double myPower = power(base, exponent);
    cout << myPower << std::endl;
}

// function declaration
double power(double base, int exp)
{
    if (exp == 1) 
    {
        return base;
    }
    double result = base;
    for (int i = 1; i < exp; i++)
    {   
        result *= base;
    }
    return result;
}