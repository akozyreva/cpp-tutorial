#include <iostream>
#include <vector>
#include "user.h"
#include "teacher.h"
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
// for running it 
// g++ main.cpp user.cpp teacher.cpp   
int main()
{    // std::vector<User> users;
    // users.push_back(teacher);

    // print_users(users);

    // 1- User is created
    // 2- subclass Teacher from User is created
    Teacher teacher;
    teacher.output();
    teacher.first_name = "Mike";
    std::cout << teacher.first_name << "\n";
   
}
