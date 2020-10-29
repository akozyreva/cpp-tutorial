#include <iostream>

int main()
{
    // sort here works, but it's not efficient
    const int ARR_SIZE = 5;
    int A[ARR_SIZE] = {5, 4, 3, 2, 1};

    int move = 0;
    bool is_sorted = false;
    while (not is_sorted)
    {
        int i = 0;
        is_sorted = true;
        while (i < ARR_SIZE - 1)
        {
            move++;
            if (A[i] > A[i + 1])
            {
                int tmp = A[i];
                A[i] = A[i + 1];
                A[i + 1] = tmp;
                is_sorted = false;   
            }
            i++;
        }
    }

    for (int i = 0; i < ARR_SIZE; i++)
    {
        std::cout << A[i] << '\n';
    }
    std::cout << "Arr was sorted with " << move << " count " << '\n';
}