#include <iostream>
#include <vector>

void do_somth(int array[])
{
}

void print_array(const int data[], int size)
{
    for (int i = 0; i < size; i++)
    {
        // throws an error
        // data[i]++;
        std::cout << data[i] << "\t";
    }
    std::cout << "\n";
    // thorws an error
    // do_somth(data);
}

int main()
{
    int data[] = {1, 2, 3};
    // array passes pointer to function, so it can be change
    // inside of it
    // to prevent it, use const modifier!
    print_array(data, 3);
    std::cout << data[0] << "\n";
}
