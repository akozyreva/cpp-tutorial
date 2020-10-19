#include <sstream>
#include <iostream>
#include <string>
#include <vector>

// find min and max in sequence of numbers.
int main()
{
    std::string numbers = "1 9 3 4 -5";
    std::stringstream iss(numbers);

    int number;
    std::vector<int> myNumbers;
    while (iss >> number)
        myNumbers.push_back(number);

    int max = myNumbers[0];
    int min = myNumbers[0];
    for (int i = 1; i < myNumbers.size(); i ++)
    {
        if (max < myNumbers[i])
        {
            max = myNumbers[i];
        }
        if (min > myNumbers[i])
        {
            min = myNumbers[i];
        }
    }
    std::cout << min << ' ' << max << '\n';
    std::string res = std::to_string(min) + ' ' + std::to_string(max);
    std::cout << res << '\n';
}