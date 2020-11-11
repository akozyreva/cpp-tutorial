#include <iostream>

int quick_pow(int num, int pow)
{
    std::cout << num << ' ' << pow << '\n';
    if (pow == 0)
    {
        return 1;
    }
    else if (pow % 2 == 0)
    {
        return quick_pow(num * num, pow / 2);
    }
    else
    {
        return num * quick_pow(num, pow - 1);
    }
    
    
};


int main()
{
    int num = 3;
    int pow = 1;
    int res = quick_pow(num, pow);
    std::cout << res << '\n';
}