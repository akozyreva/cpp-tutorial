#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

void play_game()
{
    int rand_num = (rand() % 100) + 1;
    std::cout << rand_num << "\n";
    int guess_num = -1;
    while (true)
    {
        std::cout << "Guess a num\n";
        std::cin >> guess_num;
        if (guess_num == rand_num)
        {
            std::cout
                << "You won!\n";
            break;
        }
        else if (guess_num < rand_num)
        {
            std::cout << "Too low\n";
        }
        else
        {
            std::cout << "Too high\n";
        }
    }
}

int main()
{
    // it deos for making random num really random
    // otherwise the same sequence will be generated
    srand(time(NULL));
    int choice = 0;

    do
    {
        std::cout << "0. Quit\n1.Play Game\n";
        std::cin >> choice;
        switch (choice)
        {
        case 0:
            std::cout << "You're quit\n";
            return 1;
        case 1:
            play_game();
            break;
        }
    } while (choice != 0);
}
