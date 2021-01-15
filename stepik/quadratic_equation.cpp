#include <iostream>
#include <math.h> 
// Solve ax^2+bx+c=0
int main()
{
    std::cout << "Enter variables for quadratic equation\n";
    int a, b, c;
    double x1, x2;
    std::cin >> a >> b >> c;
    double D = (b * b) - (4 * a * c);
    if (D > 0 or D == 0)
    {
        D = sqrt(D);
        x1 = (-b + D)/(2*a);
        x2 = (-b - D)/(2*a);
        std::cout << x1 << ' ' << x2 << '\n';
        //(-В+D1/2)/2А
    }
    else
    {
        std::cout << "No real roots\n";
    }
    
    
}