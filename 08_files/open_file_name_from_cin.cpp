#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main()
{
    std::string filename;
    std::cout << "Enter filename" << "\n";
    std::cin >> filename;
    std::ofstream file (filename);
    if (file.is_open())
    {
        std::cout << "File opened successfully"
                  << "\n";
    }
}
