#include <iostream>

// https://ru.wikipedia.org/wiki/%D0%A0%D0%B5%D1%88%D0%B5%D1%82%D0%BE_%D0%AD%D1%80%D0%B0%D1%82%D0%BE%D1%81%D1%84%D0%B5%D0%BD%D0%B0
int main()
{
    int n;
    const int started_index = 2;
    std::cout << "Please insert a number " << '\n';
    std::cin >> n;
    bool sieve[n + 1]; // 0 and 1 aren't simple numbers nor composite

    for (int i = started_index; i < n + 1; i++)
    {
        sieve[i] = true;
    }

    int index = started_index;
    while (index * index <= n)
    {
        if (sieve[index])
        {
            for (int y = index * index; y <= n; y += index)
            {
                sieve[y] = false;
            }
        }
        index += 1;
    }
    for (int i = started_index; i < n + 1; i++)
    {
        if (sieve[i])
        {
            std::cout << i << '\t';
        }
    }
    std::cout << '\n';
}