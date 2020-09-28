#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

void print_guesses(int arr[], int size)
{   
    std::cout << "Possible guesses:\n";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << "\t";
    }
    std::cout << "\n";
}

void print_count_of_tries(int attempts)
{
    std::cout << "Number of attempts " << attempts << "\n";
}

void play_game()
{
    int rand_num = (rand() % 100) + 1;
    const int kGuesseSize = 100;
    int guesses[kGuesseSize];
    std::cout << rand_num << "\n";
    int guess_num = -1;
    int attempt = 0;
    while (true)
    {
        std::cout << "Guess a num\n";
        std::cin >> guess_num;
        guesses[attempt] = guess_num;
        attempt++;
        if (guess_num == rand_num)
        {
            std::cout
                << "You won!\n";
            print_guesses(guesses, attempt);
            print_count_of_tries(attempt);
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
