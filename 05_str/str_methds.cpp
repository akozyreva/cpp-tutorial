#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string greeting = "Hello";
    greeting.append(" there!!");
    cout << greeting.length() << "\n";
    greeting.insert(3, "!");
    cout << greeting << "\n";
    // 2 arg - number of chars to remove. if empty - delete all
    greeting.erase(3, 1);
    cout << greeting << "\n";
    cout << "Remove last char from str "
         << "\n";
    greeting.erase(greeting.length() - 1);
    cout << greeting << "\n";
    cout << "Removing char with pop method "
         << "\n";
    greeting.pop_back();
    cout << greeting << "\n";
    string phrase = "What the Hell";
    cout << phrase.replace(phrase.length() - 4, 4, "Heaven") << "\n";
}
