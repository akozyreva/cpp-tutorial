#include <iostream>
#include <string>


int main()
{
    std::string s = "scott>tiger";
    std::string delimiter = ">";
    std::string first_part_token = s.substr(0, s.find(delimiter));
    std::string second_part_token = s.substr(s.find(delimiter) + 1, s.size() - s.find(delimiter));
    std::cout << first_part_token << '\n';
    std::cout << second_part_token << '\n';
}