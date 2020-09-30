#include <iostream>
#include <string>

// this is generic function,
// which accepts all BASIC types
template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
// it's the same, but for arrs
template <typename T>
void swap(T a[], T b[], int size)
{
    for (int i = 0; i < size; i++)
    {
        T temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}
void print_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << "\n";
    }
}
int main()
{
    int a = 3;
    int b = 4;
    swap(a, b);
    std::cout << "a: " << a << "\tb: " << b << "\n";
    std::string firstName = "Mike";
    std::string lastName = "John";
    swap(firstName, lastName);
    std::cout << "firstName: " << firstName << "\tlastName: " << lastName << "\n";
    int arr1[3] = {1, 2, 3};
    int arr2[3] = {4, 5, 6};
    swap(arr1, arr2, 3);
    print_arr(arr1, 3);
    print_arr(arr2, 3);
}
