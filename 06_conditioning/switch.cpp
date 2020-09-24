#include <iostream>

int main()
{   
    int age;
    std::cout << age << "\n";
    std::cout << "What is your age?: ";
    std::cin >> age;
    switch (age)
    {
    case 13:
        std::cout << "your age is " << age << "\n";
        break;
    case 14:
        std::cout << "your age is " << age << "\n";
        break;
    default:
        std::cout << "you're human\n";
        break;
    }
}
