#include <iostream>

int main()
{
    int N, M;
    std::cin >> N >> M;

    // memory allocation
    // we create array of pointers
    int **arr = new int *[N];
    // here we create 2-d arr but as linear
    arr[0] = new int[N * M];
    // here we create arrays of pointers in pointers
    for (int i = 1; i < N; i++)
    {
        arr[i] = arr[0] + M * i;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            arr[i][j] = i * M + j;
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            std::cout << arr[i][j] << '\t';
        }
        std::cout << '\n';
    }

    // but when we use new keyword, we must manually make free memory
    // because there're arrs, we use []
    // we delete pointer to 0 el
    delete[] arr[0];
    // we delete arr
    delete[] arr;
}