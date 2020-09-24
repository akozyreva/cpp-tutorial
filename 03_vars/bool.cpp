#include <iostream>

using std::cin;
using std::cout;

int main()
{
    bool pizza_is_good = true;
    bool true_val = -1;
    // all numbers except 0 is considered to be true
    cout << true_val << std::endl;
    // how to actually print - true or false
    // boolalpha is manulpalator(helper function from iosteram), as endl
    cout << std:: boolalpha << true_val << std::endl;
}