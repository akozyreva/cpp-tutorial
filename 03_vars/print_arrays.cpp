#include <iostream>
// when we pass arr to a function we pass a pointer!
// it doesn't make sense to calculate size of array.
void print_array(int array[])
{
    std::cout << sizeof(array) << "\n";
}

int main()
{
    int known_guesses[] = {10, 3, 1};
    std::cout << sizeof(known_guesses) << "\n";
    print_array(known_guesses);
}