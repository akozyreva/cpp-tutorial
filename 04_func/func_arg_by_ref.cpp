#include <iostream>
#include <vector>

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    std::cout << "a: " << a << "\tb: " << b << "\n";
}
int main()
{
    int a = 3;
    int b = 4;
    swap(a, b);
    // after the swap variables have original values,
    // if you dpon't use pointers
    std::cout << "a: " << a << "\tb: " << b << "\n";
}
