#include <iostream>

// this example doesn't work
// stack cleans adresses of function local vars, when function ends. 
// when we try to assign address of var from function to pointer,
// we receive  Segmentation fault   error

int *foo()
{
    int x = 5;
    return &x;
};

int main()
{

    int *p = foo();
    std::cout << *p << '\n';
}