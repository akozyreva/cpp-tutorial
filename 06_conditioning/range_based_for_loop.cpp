#include <iostream>

// this example doesn't work, because it refers to pointer, not to the value!
// but for vectors and stl arrs works fine!
// void print_arr(int arr[])
// {
//     for (int n : arr)
//     {
//         std::cout << n << "\t";
//     }
// }

int main()
{
    // more easiest way to iterate through collections
    int data[] = {1, 2, 3, 4, 5, 6};
    for (int n : data)
    {
        std::cout << n << "\t";
    }
    // print_arr(data);
}
