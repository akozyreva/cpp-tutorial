#include <iostream>

//  when you try to find left boundary,
//  where we can put number, if it's not in arr
//  in sorted arr!
int left_bound(int arr[], int N, int x)
{
    int left = -1;  // arr[left] < x
    int right = N;  // arr[right] >= x
    while (right - left > 1)
    {
        // round goes down and only int is left
        int middle = (left + right) / 2;
        if (arr[middle] < x)
        {
            left = middle;
        }
        else
        {
            right = middle;
        }
    }
    return left;
}

void find(int arr[], int N, int x)
{
    int left = left_bound(arr, N, x);
    if (left + 1 < N - 1 && arr[left + 1] == x)
    {
        std::cout << "Num was found on pos " << left + 1 << '\n';
    }
    else
    {
        std::cout << "Num isn't in seq " << '\n';
    }
}
int main()
{
    int N = 10;
    int arr[] = {1,
                 3,
                 3,
                 7,
                 7,
                 7,
                 7,
                 9,
                 10,
                 10};
    int x = 6;
    std::cout << "left boundary is " << left_bound(arr, N, x) << '\n';
    find(arr, N, x);
}
