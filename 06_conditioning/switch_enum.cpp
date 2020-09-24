#include <iostream>

int main()
{
    enum seasons
    {
        summer,
        spring,
        fall,
        winter
    };
    seasons cur_season = winter;
    int age;
    switch (cur_season)
    {
    case summer:
        std::cout << "it's summer \n";
        break;
    case spring:
        std::cout << "it's spring \n";
        break;
    case fall:
        std::cout << "it's autumn \n";
        break;
    case winter:
        std::cout << "it's winter \n";
        break;
    }
}
