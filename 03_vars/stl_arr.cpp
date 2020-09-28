#include <iostream>
#include <array>

// std templated lib array

void print_stl_arr(std::array<int, 3> data)
{
    // it creates another object
    // and doesn't change original array!
    for (int i = 0; i < data.size(); i++)
    {
        std::cout << data[i] << "\t";
    }
    std::cout << "\n";
}

int main()
{
    // stl_arr knows its size
    // size doesn't change
    // reference to function by val (as vectors)
    // constant, as usual arr
    std::array <int, 3> data = {1, 2, 3};
    print_stl_arr(data);
    print_stl_arr(data);
}