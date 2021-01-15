#include <iostream>

int def_smallest_log(int n)
{
    int log = 2;
    int power = 1; 
    bool is_log_num_found = false;
    while(not is_log_num_found)
    {
        power += 1;
        log *= 2;
        if (log > n)
        {
            power -= 1;
            return power;
        }
    }   
    return power;
}

int main()
{
    int T, x;
    std::cin >> T;
    int *logs = new int[T];
    for(int i = 0; i < T; i ++)
    {   
        std::cin >> x;
        logs[i]= def_smallest_log(x);
    }
    for(int i = 0; i < T; i ++)
    {
        std::cout << logs[i] << '\n';
    }
    delete [] logs;
}