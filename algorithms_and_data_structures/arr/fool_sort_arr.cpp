#include <iostream>

int main()
{
    // sort here works, but it's not efficient
    const int ARR_SIZE = 5;
    int A[ARR_SIZE] = {5, 4, 3, 2, 1};

    int i = 0;
    int move = 0;
    while (i < ARR_SIZE - 1)
    {
        move ++;
        if(A[i] > A[i + 1])
        {
            int tmp = A[i];
            A[i] = A[i + 1];
            A[i + 1] = tmp;
            i = 0;
        }
        else
        {
            i += 1;
        }
    }
    for (int i = 0; i < ARR_SIZE; i ++)
    {
        std::cout << A[i] << '\n';
    }
    std::cout << "Arr was sorted with " << move << " count " << '\n';
}