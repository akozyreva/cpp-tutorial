#ifndef USER_H
#define USER_H
#include <string>
class User
{
    // all is by default private
    bool is_active = true;

public:
    std::string first_name;
    std::string last_name;
    std::string status;
    void is_user_active();
    // if another constructor is specified, we must declare default constructor, if it's needed
    User();
    User(std::string first_name, std::string last_name);
    User(std::string first_name, std::string last_name, std::string status);
};
#endif