#include <iostream>

// where values of 2-d arr are located in memory?

int main()
{
    int N, M;
    std::cin >> N >> M;
    int arr[N][M];
    for ( int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            arr[i][j] = i + j;
        }
    }
    for ( int i = 0; i < N; i++)
    {
        for ( int j = 0; j < M; j ++)
        {
            std::cout << arr[i][j] << '\t';
        }
        std::cout << '\n';
    }

    // memory investigation
    // adr of arr are in the row
    int *p = reinterpret_cast<int *>(arr);
    for( int i = 0; i < M*N; i ++)
    {
        std::cout << *(p + i) << '\t';
    }
    std::cout << '\n';
}