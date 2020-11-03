#include <iostream>

int main()
{
    int N, M;
    std::cin >> N >> M;
    int arr[N][M];
    for (int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            arr[i][j] = i + j;
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j ++)
        {
            std::cout << arr[i][j] << '\t';
        }
        std::cout << '\n';
    }
}