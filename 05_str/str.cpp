#include <iostream>
#include <string>

using std::cout;
using std::string;

int main()
{
    string greeting = "hello";
    string welcome = "welcome";
    welcome += "!";
    // actually it's char
    // cout << typeid(greeting[0]).name() << "\n";
    cout << string(1, greeting[0]) + " there"
         << "\n";
    string empty_str; // by default is ""
    cout << empty_str << "\n";
    cout << "Str concatenation example"
         << "\n";
    cout << "You're " + welcome << "\n";

    cout << "Str methods"
         << "\n";
    cout << "Len of str"
         << "\n";
    cout << greeting.length() << "\n";

    /* in C str == array of chars
     it has bunch of limitations
    char name[] = "Mike";
    name = "Alex"; // thors an error, it's impossible to change an arr
    */
    string var_from_input;
    // cin grabs only the 1 word, once it sees the space, it stops
    std::cin >> greeting;
    cout << greeting << "\n";
}
