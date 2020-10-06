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
    // if another constructor is specified, we must declare default constructor, if it's needed
    User()
    {
        std::cout << "default constructor\n";
    }
    User(std::string first_name, std::string last_name)
    {
        std::cout << "constructor with default status initialized\n";
        this->first_name = first_name;
        this->last_name = last_name;
        status = "Classic";
    }
    User(std::string first_name, std::string last_name, std::string status)
    {
        std::cout << "constructor initialized\n";
        this->first_name = first_name;
        this->last_name = last_name;
        this->status = status;
    }
};
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
