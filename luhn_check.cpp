#include <iostream>
#include <string>

int define_check_sum(int step, std::string card_num)
{
    int check_sum = 0;
    // std::cout << card_num.size() << "\n";
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
        // std::cout << num << "\n";
    }
    // std::cout << check_sum << "\n";
    return check_sum;
}

bool luhn_check(std::string card_num)
{
    int check_sum = define_check_sum(0, card_num);
    // std::cout <<check_sum << "\n";
    return check_sum % 10 == 0;
}

int define_luhn_digit(std::string card_num)
{
    // define digit, which allows to pass luhn check
    int check_sum = define_check_sum(1, card_num);
    int divided_on_10_sum = check_sum / 10 * 10 + 10;
    return divided_on_10_sum - check_sum;
}

std::string get_val_which_passed_luhn_check(std::string card_num)
{
    // generate new value wich luhn digit
    int extra_luhn_digit = define_luhn_digit(card_num);
    card_num += std::to_string(extra_luhn_digit);
    return card_num;
}

int main()
{
    std::string c_n = "511657000004052";
    if (!luhn_check(c_n))
    {
        c_n = get_val_which_passed_luhn_check(c_n);
    }
    std::cout << c_n << "\n";
    // bool res = luhn_check(c_n);
    // std::cout << res << "\n";
    // int luhn_digit = define_luhn_digit(c_n);
    // std::cout << luhn_digit << "\n";
}
