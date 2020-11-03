#include <iostream>


void print_arr(int *p, int N, int M)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            std::cout << p[i *M + j] << '\t';
        }
        std::cout << '\n';
    }
}

int main()
{
    int N, M;
    std::cin >> N >> M;
    int arr[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            arr[i][j] = i + j;
        }
    }
    print_arr(reinterpret_cast<int *> (arr), N, M);
}