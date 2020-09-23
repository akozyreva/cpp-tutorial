#include <iostream>

using std::cin;
using std::cout;

// function definition
double power(double, int);
void print_pow(double, int);

int main()
{   
    double base;
    int exp;
    cout << "What is the base? :";
    cin >> base;
    cout << "What is exponent? :";
    cin >> exp;
    print_pow(base, exp);
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

void print_pow(double base, int exp) 
{
    double myPower = power(base, exp);
    cout << base << " raised to the " << exp << " power is " << myPower << std::endl;
}