#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
     string greeting = "What the hell?";
     greeting.replace(greeting.find("hell"), 4, "****");
     cout << greeting << "\n";
     cout << "Example of substring"
          << "\n";
     cout << greeting.substr(5, 3) << "\n";
     cout << greeting.find_first_of("t") << "\n";
     // if occurence wasn't found, it returns npos
     // npos = -1, but in str representatin is a huge num,
     // that's why if we cout this, it  shows a big num
     cout << greeting << "\n";
     // it returns 0 if true
     cout << greeting.compare("What the ****?") << "\n";
}
