#include <iostream>
#include <vector>

// overload
// void do_stuff(int x)
// and if we change type of arg
// void do_stuff(std::string x, int x)
// or
// void do_stuff(std::string x)
// it calls overloading. return type doesn't play role
// only name of func and type of arg and number of args!
void square(int a)
{
    std::cout << a * a << "\n";
}
void square(double a)
{
    std::cout << a * a << "\n";
}
void square(int a, int b)
{
    std::cout << a * b << "\n";
}
void square(double a, double b)
{
    std::cout << a * b << "\n";
}

int main()
{
    square(2);
    square(2.1);
    square(2, 3);
    square(2.1, 3.1);
}
