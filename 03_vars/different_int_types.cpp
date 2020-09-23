#include <iostream>
#include <climits>

using std::cout;

int main()
{
    short a;
    int b;
    long c;
    long long d;
    // unsigned allow only positive values!
    // but they can save bigger value than signed data types
    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;
    cout << sizeof(long) << std::endl;
    // or, using climits lib - it shows in bits
    cout << SHRT_MAX << std::endl;
    cout << SHRT_MIN << std::endl;
    // for unsigned types:
    cout << USHRT_MAX << std::endl;
}