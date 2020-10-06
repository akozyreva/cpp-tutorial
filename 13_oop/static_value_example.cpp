#include <iostream>
#include <string>
#include <vector>
class User
{
    // all is by default private
    bool is_active;
    // static value is also unavailable outside of class. 
    // we can have an access via getter
    static int user_count;

public:
    std::string first_name;
    std::string last_name;
    std::string status;

    // static has an access only to static!
    static int get_user_count()
    {
        return user_count;
    }

    User(std::string first_name, std::string last_name, std::string status)
    {
        std::cout << "constructor initialized\n";
        this->first_name = first_name;
        this->last_name = last_name;
        this->status = status;
        user_count ++;
    }
    ~User()
    {
        user_count--;
    }
};
// declare deafult value of static variable 
int User::user_count = 0;
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
    User user1("Caleb", "Curry", "Gold");
    std::cout << User::get_user_count() << "\n";
    // destruct user manually
    user1.~User();
    std::cout << User::get_user_count() << "\n";
}
