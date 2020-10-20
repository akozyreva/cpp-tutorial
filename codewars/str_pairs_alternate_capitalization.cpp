#include <iostream>
#include <string>
#include <utility>

std::pair<std::string, std::string> capitalize(const std::string &s)
{
    std::pair<std::string, std::string> capitalized_str = {"", ""};
    for (int i = 0; i < s.size(); i++)
    {
        if (i == 0 || i % 2 == 0)
        {
            capitalized_str.first += toupper(s[i]);
            capitalized_str.second += s[i];
        }
        else
        {
            capitalized_str.second += toupper(s[i]);
            capitalized_str.first += s[i];
        }
    }
    std::cout << s << '\n';
    std::cout << capitalized_str.first << '\n';
    std::cout << capitalized_str.second << '\n';
    return capitalized_str;
}

int main()
{
    capitalize("abcdef");
}