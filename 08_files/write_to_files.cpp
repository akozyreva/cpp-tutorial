#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main()
{
    // short from of creation new file
    // std::ofstream file ("hello.txt");
    std::ofstream file;
    // create a new file, if it doesn't exist
    file.open("hello.txt");
    // use for append
    // file.open("hello.txt", std::ios::app);
    // it couts to file
    if (file.is_open())
    {
        std::cout << "File opened successfully"
                  << "\n";
    }
    file << "hey";
    std::vector<std::string> names;
    names.push_back("Mike");
    names.push_back("Ann");
    names.push_back("John");

    for (std::string name : names)
    {
        file << name << "\n";
    }
}
