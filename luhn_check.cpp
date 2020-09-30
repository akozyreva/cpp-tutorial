#include <iostream>
#include <string>

int luhn_check(std::string card_num)
{
    std::string new_card_num = card_num;
    int check_sum = 0;
    std::cout << card_num.size() << "\n";
    int step = 0;
    for (int i = card_num.size(); i != 0; i--)
    {
        step ++;
        int num = new_card_num[i-1] - '0';
        if (step % 2 == 0)
        {
            num *= 2;
            if (num > 9)
            {
                num -=9;
            }
        std::cout << i << " " << new_card_num[i-1] << " " << num << "\n";
        }
        check_sum += num;
        //std::cout << num << "\n";
    }
    std::cout << check_sum << "\n";
    if (check_sum % 10 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    //std::cout << new_card_num << "\n";
}

int main()
{
    std::string c_n = "79927398713";
    int res = luhn_check(c_n);
    std::cout << res << "\n";
}