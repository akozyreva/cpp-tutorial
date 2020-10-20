#include <iostream>

int main()
{
    int a = 10;
    // it refs to a in memory
    int& b = a;
    // they have the same adr in memory
    std::cout << &b << " " << &a << '\n';
    int c = 100;
    std::cout << &c << '\n';
    // now it refs to c in memory, and a becomes 100
    b = c;
    std::cout << a << " " << c << '\n';
}