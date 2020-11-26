#include <iostream>
#include <string>
int main()
{
    std::string speed_auto_num;
    int salary = 0;
    bool is_chef_here = false;
    while(not is_chef_here)
    {
        std::getline(std::cin, speed_auto_num);
        
        // get speed in num and auto num
        int splitted_index = speed_auto_num.find(' ');
        std::string speed  = speed_auto_num.substr(0, splitted_index);
        int speed_num = atoi(speed.c_str());
        std::string auto_num = speed_auto_num.substr(splitted_index + 1, speed_auto_num.size()-1);
        //std::cout << speed_num << ' ' << auto_num << '\n';
        
        // check, if it's chef
        if(auto_num == "A999AA")
        {
            std::cout << salary << '\n';
            break;
        }

        if (speed_num > 60)
        {
            // convert char to int
            int num1 = (int) auto_num[1] - '0';
            int num2 = (int) auto_num[2] - '0';
            int num3 = (int) auto_num[3] - '0';
            if ( num1 == num2 && num2 == num3 && num1 == num3)
            {
                salary += 1000;
            }
            else if (num1 == num3 || num1 == num2 || num2 == num3)
            {
                salary += 500;
            }
            else {
                salary += 100;
            }
        }

    }
   

}