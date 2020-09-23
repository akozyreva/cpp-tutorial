#include <iostream>
#include <climits>

using std::cout;

int main()
{
    // max value of char is 127
    // char can store number(ascii value) or letter or special charachter
    char x = 'A';
    cout << x << '\n';
    // char -> int, shows number from ascii table
    cout << (int)x << '\n';

    char a_in_ascii = 65;
    // it shows A! because for char it's the same - 'A' or 65
    cout << x << '\n';

    unsigned char y = 129;
}