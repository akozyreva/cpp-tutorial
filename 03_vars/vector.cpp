#include <iostream>
#include <vector>

int main()
{
    std::vector<int> data = {1, 2, 3};
    data.push_back(4);
    std::cout << data[0] << "\n";
    // it's impossible to print easilly the whole vector

    // remove last element
    data.pop_back();
    std::cout << data.size() << "\n";
}
