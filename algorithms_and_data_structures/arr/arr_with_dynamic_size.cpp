#include <iostream>

int main()
{
    const int MAX_SIZE = 100;
    int A[MAX_SIZE];
    int x;
    int top = 0;
    std::cout << "Insert number. 0 is exit" << '\n';
    std::cin >> x;
    while (x != 0)
    {
        A[top] = x;
        top += 1;
        std::cin >> x;
    }
    
    for (int i = 0; i < top; i ++)
    {
        std::cout << A[i] << '\t';
    }
    std::cout << '\n';
}