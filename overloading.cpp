#include <iostream>

class Position
{
public:
    int x = 10;
    int y = 20;
    Position operator+(Position added)
    {
        Position new_pos;
        std::cout << x << " " << added.x << "\n";
        std::cout << y << " " << added.y << "\n";
        new_pos.x = x + added.x;
        new_pos.y = y + added.y;
        return new_pos;
    }
    bool operator==(Position equaled)
    {
        return (x == equaled.x && y == equaled.y);
    }
    friend std::ostream &operator<<(std::ostream &output, const Position &pos)
    {
        output << pos.x << " " << pos.y << "\n";
        return output;
    }
    friend std::istream &operator>>(std::istream &input, Position &pos)
    {

        input >> pos.x >> pos.y;
        return input;
    }
    Position()
    {
    }
    Position(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
};

int main()
{
    Position pos1, pos4;
    Position pos2(100, 200);
    Position pos3 = pos1 + pos2;
    std::cout << pos3.x << " " << pos3.y << "\n";
    bool res = pos1 == pos4;
    std::cout << res << "\n";
    std::cout << pos1;

    std::cout << "Example of overloading cout and cin method\n";
    std::cin >> pos1;
    std::cout << pos1;
}