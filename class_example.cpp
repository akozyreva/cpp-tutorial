#include <iostream>
#include <string>

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

int main()
{
    User me;
    me.first_name = "Caleb";
    me.last_name = "Curry";
    me.status = "Gold";

    std::cout << "First name is " << me.first_name << "\n";
    me.is_user_active();
}
