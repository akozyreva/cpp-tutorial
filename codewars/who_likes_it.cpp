#include <string>
#include <vector>
#include <iostream>

std::string likes(const std::vector<std::string> &names)
{
    std::string like_many_names = " like this";
    // /std::string like_one_name = like_many_names.insert(5, "s");
    std::string like_one_name = " likes this";
    const int names_size = names.size();
    if (names_size == 0)
    {
        std::cout << "no one" + like_one_name << '\n';
    }
    else if (names_size == 1)
    {
        std::cout << names[0] + like_one_name << '\n';
    }
    else
    {
        std::string str_names = names[0];
        if (names_size == 2)
        {
            std::cout << str_names + " and " + names[1] + like_many_names << '\n';
        }
        if (names_size == 3)
        {
            std::cout << str_names + ", " + names[1] + " and " + names[2] + like_many_names << '\n';
        } 
        else
        {
            std::string rest = std::to_string(names_size - 2);
            std::cout << str_names + ", " + names[1] + " and " + rest + " others" + like_many_names << '\n';
        }
    }
}

int main()
{
    //std::vector<std::string> names = {"Peter"};
    std::vector<std::string> names = {"Alex", "Jacob", "Mark", "Max"};
    likes(names);
}
