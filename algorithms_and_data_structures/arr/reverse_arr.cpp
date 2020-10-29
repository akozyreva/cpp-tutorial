#include <iostream>

int main()
{
    const int N = 5;
    int A[N] = {1, 2, 3, 4, 5};
    
    // how to reverse arr itself without another arr?
    // if int/int , we get int without round!
    for (int i = 0; i < N / 2; i++)
    {
        int tmp = A[i];
        std::cout << "tmp" << tmp << '\n';
        A[i] =  A[N - i - 1];
        A[N - i - 1] = tmp;
    }
    for (int i = 0; i < N; i ++)
    {
        std::cout << A[i] << '\t';
    }
    std::cout << '\n';
}