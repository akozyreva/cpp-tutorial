#include <iostream>
#include <string>

class User
{
public:
    std::string name;

    void print_hello()
    {
        std::cout << "hello!" << '\n';
    }
};

int main()
{
    int *x = new int(5);
    std::cout << "Pointer " << x << " references to " << *x << '\n';
    delete x;

    User u;
    u.name = "Mike";
    std::cout << u.name << '\n';

    User *p = new User();
    (*p).name = "Stefan";
    std::cout << (*p).name << '\n';
    delete p;

    // another - more convenient way to write it
    User *p1 = new User();
    p1->name = "John";
    std::cout << p1->name << '\n';
    p1->print_hello();
    delete p;
}