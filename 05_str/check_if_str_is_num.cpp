// Example program
#include <iostream>
#include <string>

int main()
{
    // returns true(1), if symbol is digit, otherwise - false
    std::string num_started_with_str = "s437fghdgf483";
    for (char i : num_started_with_str)
    {
        if(isdigit(i))
        {
            std::cout << i << '\n';
        }
    }
}