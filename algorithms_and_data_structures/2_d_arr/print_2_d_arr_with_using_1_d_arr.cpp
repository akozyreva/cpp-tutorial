#include <iostream>


void print_arr(int *A, int N, int M)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            std::cout << A[i *M + j] << '\t';
        }
        std::cout << '\n';
    }
}

int main()
{
    int N, M;
    std::cin >> N >> M;
    int arr[N * M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            arr[i* M + j] = i + j;
        }
    }
    print_arr(arr, N, M);
}