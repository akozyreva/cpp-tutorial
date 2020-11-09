#include <iostream>
void count_sort(int A[], int N)
{
    // when we write in this way, that means, that all values will be zeros.
    // int F[10] = {1}; first el is 1, another are zeros.
    int F[N] = {0};
    for(int i = 0; i < N; i++ )
    {
        F[A[i]] ++;
    }
    int i = 0;
    //now we need to recreate new arr
    for (int  x = 0; x < N; x++)
    {
        for (int k = 0; k < F[x]; k++)
        {
            A[i] = x;
            i++;
        }
    }
}
void generate_random_arr(int A[], int N, int M)
{
    for (int i = 0; i < N; i++)
    {
        A[i] = rand() % M;
    }
    
}
void print_arr(int A[], int N)
{
     for (int i = 0; i < N; i++)
    {
        std::cout << A[i] << '\t';
    }
    std::cout << '\n';
}
int main()
{
    int N = 10;
    int A[N];

   
    int M = 5;
    //count_sort(A, N);
    generate_random_arr(A, N, M);
    print_arr(A, N);
    count_sort(A, N);
    print_arr(A, N);
}