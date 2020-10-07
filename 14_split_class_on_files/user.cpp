#include <iostream>
#include <string>
#include <vector>
#include "user.h"

void User::is_user_active()
{
    std::cout << is_active << "\n";
}
// !!!!!!!!!!!!!!!!!!!!!!!!!!
// if special keyword - friend or static is used, you must delete them here 
// because there are already in .h file
User::User()
{
    std::cout << "default constructor\n";
}
User::User(std::string first_name, std::string last_name)
{
    std::cout << "constructor with default status initialized\n";
    this->first_name = first_name;
    this->last_name = last_name;
    status = "Classic";
}
User::User(std::string first_name, std::string last_name, std::string status)
{
    std::cout << "constructor initialized\n";
    this->first_name = first_name;
    this->last_name = last_name;
    this->status = status;
}
