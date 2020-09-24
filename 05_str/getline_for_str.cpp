#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string greeting;
    // in order to get whole string, not stopping on empty space
    // use getline method
    getline(cin, greeting);
    cout << greeting << "\n";
    // use cin.getline() if you want to grab numbers and so on
}
