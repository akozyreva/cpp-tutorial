#include <iostream>


//exmaple of struct and overloading function
struct Rectangle
{
    double length;
    double width;
};

double area(double length, double width)
{
    return length * width;
}

double area(Rectangle rectangle)
{
    return rectangle.length * rectangle.width;
}

int main()
{
    Rectangle rectangle;
    rectangle.length = 10.0;
    rectangle.width = 5.;
    std::cout << area(rectangle.length, rectangle.width) << "\n";
    std::cout << area(rectangle) << "\n";
}
