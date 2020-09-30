#include <iostream>
namespace utils
{
    void print_arr(int arr[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            std::cout << arr[i] << "\n";
        }
    }
} // namespace utils

int main()
{
    int guesses[20];
    int known_guesses[] = {10, 3, 1};
    utils::print_arr(known_guesses, 3);
}