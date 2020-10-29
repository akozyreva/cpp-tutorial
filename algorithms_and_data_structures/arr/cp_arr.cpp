#include <iostream>

int main()
{
    const int N = 5;
    int A[N] = {1, 2, 3, 4, 5};
    // how to copy one arr to another;
    // B = A; doesn't work, A is pointer to first el to arr
    int B[N];
    for (int i = 0; i < N; i++)
    {
        B[i] = A[i];
    }
    for (int i = 0; i < N; i ++)
    {
        std::cout << B[i] << '\n';
    }
}