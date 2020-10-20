#include <iostream>

void increase_num(int num)
{
    num++;
}

void increase_num_pointer_is_expected(int *num)
{
    (*num)++;
}

void increase_num_by_ref(int &num)
{
    num++;
}

int main()
{
    int a = 10;
    // pointer creation
    int *b = &a;
    // print values
    std::cout << *b << ' ' << a << '\n';
    // print adr
    std::cout << b << ' ' << &a << '\n';
    // change value of value of pointer
    *b = 11;
    // print values
    std::cout << "Print values, when val of val of pointer was reassigned" << '\n';
    std::cout << *b << ' ' << a << '\n';

    // this example don't work! we must specify that it's dererefenced val inside function!
    // increase_num(*b);
    // // print values
    // std::cout << *b << ' ' << a << '\n';

    increase_num_pointer_is_expected(b);
    // print values
    std::cout << "Increase by pointer" << '\n';
    std::cout << *b << ' ' << a << '\n';

    // increase by ref
    increase_num_by_ref(a);
    std::cout << "Increase by ref" << '\n';
    std::cout << *b << ' ' << a << '\n';


    // increase itself - var doesn't change
    increase_num(a);
    std::cout << "Increase simply - variables don't change" << '\n';
    std::cout << *b << ' ' << a << '\n';

    // create smart pointer via new keyword
    int *p = new int(90);
    // now you can use it as usual var
    std::cout << "Smarter pointer" << '\n';
    std::cout << *p << '\n';
    // if we don't need this pointer, we're responsible to delete it
    delete p;
}