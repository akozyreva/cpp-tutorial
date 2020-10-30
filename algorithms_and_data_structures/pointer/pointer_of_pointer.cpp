#include <iostream>

int main()
{
    int x = 2;
    int *p = &x;
    int **ppx = &p;
    int ***pppx = &ppx;
    std::cout << "adr of var:" << **pppx << " " << *ppx << " " << p << " " << &x << '\n';
    std::cout << "adr of pointers:" << &pppx << " " << &ppx << " " << &p << '\n';
    std::cout << "values:" << ***pppx << " " << **ppx << " " << *p << " " << x << '\n';
}