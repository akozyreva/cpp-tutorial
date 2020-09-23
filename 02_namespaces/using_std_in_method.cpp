#include <iostream>

int main()
{
    using std::cout;
    cout << "Hello, World!\n";
}

void test()
{ // doesn't work, no namespace is written
    cout << "Hello, World!\n";
}