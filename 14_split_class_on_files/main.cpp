#include <iostream>
#include <vector>
#include "user.h"
// for compliation 
// g++ main.cpp user.cpp
void print_users(const std::vector<User> &users)
{
    for (User user_row : users)
    {   
        std::cout << "==================\n";
        std::cout << user_row.first_name << "\n";
        std::cout << user_row.last_name << "\n";
        std::cout << user_row.status << "\n";
        std::cout << "==================\n";
    }
};
int main()
{
    User me("Caleb", "Curry", "Gold");

    std::cout << "First name is " << me.first_name << "\n";
    std::vector<User> users;
    users.push_back(me);

    User he("Mike", "Smith", "Platin");
    users.push_back(he);

    User she("Nina", "Smith");
    users.push_back(she);
    print_users(users);
}
