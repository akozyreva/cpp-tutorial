#include <iostream>

int main()
{
    int N, M;
    std::cin >> N >> M;

    // memory allocation
    // we create array of pointers
    int **arr = new int*[N];

    // here we create arrays of pointers in pointers
    for (int i = 0; i < N; i ++)
    {
        arr[i] = new int[M];
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
    for (int i = 0; i < N; i ++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}