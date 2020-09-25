#include <iostream>

int main()
{
    // arrs in C++ don't change their size!
    // but can change element's val
    int guesses[20];
    int known_guesses[] = {10, 3, 1};
    // we can update val of array
    std::cout << known_guesses[0] << "\n";
    known_guesses[0] = 1;
    std::cout << known_guesses[0] << "\n";
    // it shows actually the size of bytes in memory - it's difficult to calc it
    // and iterate through loop via size
    int size = sizeof(known_guesses);
    std::cout << size << "\n";
    for (int i = 0; i < 3; i++)
    {
        std::cout << known_guesses[i] << "\n";
    }
}