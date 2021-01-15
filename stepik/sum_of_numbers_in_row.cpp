#include <iostream>
#include <string>

int main()
{
    int T;
    std::cout << "Insert num of rows: ";
    std::cin >> T;
    int *sums = new int[T];
    std::string num1, num2;

    for (int i = 0; i < T; i++)
    {
        std::cin >> num1;
        std::cin >> num2;
        int sum = atoi(num1.c_str()) + atoi(num2.c_str());
        sums[i] = sum;
    }
    for(int i = 0; i < T; i ++)
    {
        std::cout << sums[i] << '\n';
    }
    delete [] sums;
}