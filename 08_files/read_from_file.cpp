#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main()
{
    std::ofstream file("hello.txt");
    // it couts to file
    if (file.is_open())
    {
        std::cout << "File opened successfully"
                  << "\n";
    }
    std::vector<std::string> names;
    names.push_back("Mike is a child");
    names.push_back("Ann");
    names.push_back("John");

    for (std::string name : names)
    {
        file << name << "\n";
    }
    file.close();

    std::ifstream read_file("hello.txt");
    std::string input;
    std::vector<std::string> names_from_file;
    // in this example it prints every word on a new line
    while (read_file >> input) // if input was successful, it's true
    {
        names_from_file.push_back(input);
    }
    for (std::string name : names_from_file)
    {
        std::cout << name << "\n";
    }
    std::ifstream read_file_by_line("hello.txt");
    std::string line;
    getline(read_file_by_line, line);
    std::cout << line << "\n";


}
