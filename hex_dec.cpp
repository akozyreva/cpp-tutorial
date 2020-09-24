#include <iostream>

int main()
{
    // number hex
    int number = 0x30;  // 48 in decimals
    std::cout << number << "\n";
    int another_num = 30;
    std::cout << std::hex << another_num << "\n";
    std::cout << std::oct << another_num << "\n";
}
