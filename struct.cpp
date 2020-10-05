#include <iostream>
#include <string>

struct User
{
    std::string first_name;
    std::string last_name;
    std::string status;
    // we can define here private vars and methods,
    // but in C++ it's usually in classes
    void is_user_active()
    {
        std::cout << is_active << "\n";
    }
    private:
        bool is_active = true;
    
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
