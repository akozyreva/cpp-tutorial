#include <iostream>
int euclidean_gcd(int a,int b)
{
    if(b == 0)
    {
        return a;
    }
    return euclidean_gcd(b, a % b);
};



int main()
{
    int a = 5; 
    int b = 10;
    int gcd = euclidean_gcd(a, b);
    std::cout << gcd << '\n';
}