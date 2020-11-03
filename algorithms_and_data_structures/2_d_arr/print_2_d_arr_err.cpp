#include <iostream>

// size from second [] in multidemensional arr must be specified!
// otherwise error will be thrown
// it must be like: void print_arr(int A[][2], int N, int M)
// or declare const before int main 
// const int max = 100;
void print_arr(int A[][], int N, int M)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            std::cout << A[i][j] << '\t';
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
}