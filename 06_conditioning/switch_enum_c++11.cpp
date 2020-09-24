#include <iostream>
// more preferable, but only for C++ 11 version
int main()
{
    enum Season
    {
        summer,
        spring,
        fall,
        winter
    };
    Season cur_season = Season::winter;
    int age;
    switch (cur_season)
    {
    case Season::summer:
        std::cout << "it's summer \n";
        break;
    case Season::spring:
        std::cout << "it's spring \n";
        break;
    case Season::fall:
        std::cout << "it's autumn \n";
        break;
    case Season::winter:
        std::cout << "it's winter \n";
        break;
    }
}
