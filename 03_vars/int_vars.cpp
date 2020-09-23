#include <iostream>

using std::cout;

int main()
{
    int slices = 5;
    // endl - for printing in a new line
    cout << "You have " << slices << " slices of pizza." << std::endl;

    // we can use printf function from C, but you must specify type
    printf("%i\n", slices);
}