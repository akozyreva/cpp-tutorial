#include <iostream>
#include <string>

bool luhn_check(std::string card_num)
{
    int check_sum = 0;
    // std::cout << card_num.size() << "\n";
    int step = 0;
    for (int i = card_num.size(); i != 0; i--)
    {
        step++;
        int num = card_num[i - 1] - '0';
        if (!(step % 2))
        {
            num *= 2;
            num = num > 9 ? num -= 9 : num;
        }
        check_sum += num;
        //std::cout << num << "\n";
    }
    // std::cout << check_sum << "\n";
    return check_sum % 10 == 0;
}

int main()
{
    std::string c_n = "79927398713";
    bool res = luhn_check(c_n);
    std::cout << res << "\n";
}