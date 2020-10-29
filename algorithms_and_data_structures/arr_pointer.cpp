#include <iostream>
#include <vector>

int main()
{
    // with array creation, pointers to value are created
    int A[3];
    // it refers to address of &A[0] when initialized
    std::cout << A << '\n';
    std::cout << &A[0] << '\n';
    std::cout << &A[1] << '\n';
    std::cout << &A[3] << '\n';
    // it doesn't work, because wasn't initialized
    // there is no way to check, whether it was inited or not (untill C++ 17)
    /// A[0] += 1;
    // this works
    A[0] = 0;
    std::cout << A[0] << '\n';
    // addres is changed after reassigning, so it's dynamic
    // A and A[0] have different addresses!
    std::cout << A << '\n';
    std::cout << &A[0] << '\n';
    // it compiles, but actually the process will be exited with error
    // because array doesn't know his size!
    A[1000000000000000000000]=1;
}