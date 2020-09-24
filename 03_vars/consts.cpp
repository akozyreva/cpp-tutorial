#include <iostream>

using std::cout;
// it's from the C, not recommened
#define X 10

int main()
{


    // symbolic consts
    // use k in the beginning - style guide
    const int kfixed_number = 5;
    cout << X << std::endl;
    // it's another way to define const
    // before C++11 enum allows to have whatever you want inside. type of variable is enum itself.
    enum
    {
        y = 100
    };
    cout << y << std::endl;
    // shows an error
    //  y=20;
    cout << typeid(y).name();
    const int a = 8;
    cout<<a;
}