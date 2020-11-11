#include <iostream>

// implementation without recursion
int count_factorial(int num)
{
    int sum = 1;
    while (num > 0)
    {
        sum = sum * num;
        num --;
    }
    return sum;
};

int recursion_factorial(int num)
{
    //std::cout << num << '\t';
    if (num == 0)
    {
        return 1;
    }
    else 
    {
        return num * recursion_factorial(num -1);
    }
   
};
int main()
{
    int num = 5;
    int factorial = count_factorial(num);
    std::cout << factorial << '\n';
    std::cout << recursion_factorial(num) << '\n';
}