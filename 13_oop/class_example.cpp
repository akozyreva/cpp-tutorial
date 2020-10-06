#include <iostream>
#include <string>
#include <vector>

class User
{
    // all is by default private
    bool is_active = true;

public:
    std::string first_name;
    std::string last_name;
    std::string status;
    void is_user_active()
    {
        std::cout << is_active << "\n";
    }
};
void print_users(const std::vector<User> &users)
{
    for (User user_row : users)
    {
        std::cout << user_row.first_name << "\n";
        std::cout << user_row.last_name << "\n";
        std::cout << user_row.status << "\n";
    }
};
void add_user_if_not_exists(std::vector<User> &users, User user)
{
    int user_is_found = 0;
    for (User user_row : users)
    {
        if (user_row.first_name == user.first_name)
        {
            std::cout << "User is already exists"
                      << "\n";
            break;
            user_is_found = 1;
        }
    }
    if (user_is_found == 0)
    {
        users.push_back(user);
    }
}

int main()
{
    User me;
    me.first_name = "Caleb";
    me.last_name = "Curry";
    me.status = "Gold";

    std::cout << "First name is " << me.first_name << "\n";
    me.is_user_active();
    std::vector<User> users;
    users.push_back(me);

    User he;
    he.first_name = "Mike";
    he.last_name = "Smith";
    he.status = "Platin";
    add_user_if_not_exists(users, he);
    print_users(users);
}
