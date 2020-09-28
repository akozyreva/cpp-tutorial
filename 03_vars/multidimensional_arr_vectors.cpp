#include <iostream>
#include <vector>

int main()
{
    // 3 -  how many elements in every array
    int grades[2][3] = {{1, 2, 3},
                        {4, 5, 6}};

    for (int i = 0; i < 2; i++)
    {
        {
            for (int j = 0; j < 3; j++)
                std::cout << grades[i][j] << "\t";
        }
        std::cout << "\n";
    }

    std::vector<std::vector<int>> gardes_vector = {{1, 2, 3},
                                                   {4, 5, 6}};

    for (int i = 0; i < 2; i++)
    {
        {
            for (int j = 0; j < 3; j++)
                std::cout << gardes_vector[i][j] << "\t";
        }
        std::cout << "\n";
    }
}
