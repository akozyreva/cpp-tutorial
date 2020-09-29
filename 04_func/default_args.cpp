#include <iostream>

// it's not allowed not to assign values on variable
// after asigned variabled
void print_vars(int a = 0, int b = 1)
{
    std::cout << a << "\b" << b << "\n";
}

void print_vars1(int a, int b = 10)
{
    std::cout << a << "\b" << b << "\n";
}

int main()
{
    print_vars(1, 2);
    print_vars();
    print_vars1(2);
}
