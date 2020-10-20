#include <iostream>
int makeNegative(int num)
{

    if (num > 0)
    {
        num -= num + num;
    }
    return num;
}
int main()
{
    int num = 42;
    num = makeNegative(num);
    std::cout << num << '\n';
}