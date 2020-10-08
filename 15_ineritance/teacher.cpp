#include "teacher.h"
#include <iostream>

void Teacher::output()
{
    std::cout << "Yeah, it's teacher!\n"; 
}

Teacher::Teacher()
{
    std::cout << "Teacher's constructor\n";
}