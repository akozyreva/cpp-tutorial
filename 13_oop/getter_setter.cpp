#include <iostream>
#include <string>
#include <vector>

class User
{
    // all is by default private
    bool is_active;

public:
    std::string first_name;
    std::string last_name;
    std::string status;

    // for private variables we use getter-setter concept
    // in order to have a full control over data
    void set_active_state(bool is_active)
    {
        this->is_active = is_active;
    }
    bool get_active_state()
    {
        return this->is_active;
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
    me.set_active_state(true);
    std::cout << "Status is " << me.get_active_state() << "\n";
}
