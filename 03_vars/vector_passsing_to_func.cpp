#include <iostream>
#include <vector>

void print_vector(std::vector<int> data)
{
    // it creates another object
    // and doesn't change original vector!
    data.push_back(12);
    for (int i = 0; i < data.size(); i++)
    {
        std::cout << data[i] << "\t";
    }
    std::cout << "\n";
}

// add & sign to share variable
void print_vector_changed_original_vector(std::vector<int> &data)
{
    // it creates another object
    // and doesn't change original vector!
    data.push_back(12);
    for (int i = 0; i < data.size(); i++)
    {
        std::cout << data[i] << "\t";
    }
    std::cout << "\n";
}

int main()
{
    std::vector<int> data = {1, 2, 3};
    // the vector, which was passed to function
    // is another object and it changes
    // not which was assigned
    print_vector(data);
    print_vector(data);
    print_vector_changed_original_vector(data);
    print_vector_changed_original_vector(data);
    print_vector_changed_original_vector(data);
}
