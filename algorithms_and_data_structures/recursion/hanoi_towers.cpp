#include <iostream>

// we use here choice of recursion
void hanoi(int i, int k, int n)
{
    std::cout << "Hanoi called with disk " << n << '\n';
    if (n == 1)
    {
        std::cout << "move disk 1 from pin " << i << " to " << k << '\n';
    }
    else
    {
        // tmp variable
        // i = 1, k =2, last = 3
        // sum is 6, then tmp = 6 - i - k;
        int tmp = 6 - i - k;
        hanoi(i, tmp, n - 1);
        std::cout << "move disk " << n << " from pin " << i << " to " << k << '\n';
        hanoi(tmp, k, n - 1);   
    }
    std::cout << "Stop execution with disk " << n << '\n'; 
};

int main()
{
    int original_col = 1;
    int needed_col = 2;
    int height_of_tower = 2;
    hanoi(original_col, needed_col, height_of_tower);
}