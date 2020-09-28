#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>

// you play game. once you've finished - the best score
// will be printed in file

void print_guesses(std::vector<int> &guesses)
{
    std::cout << "Possible guesses:\n";
    for (int i = 0; i < guesses.size(); i++)
    {
        std::cout << guesses[i] << "\t";
    }
    std::cout << "\n";
}

void print_count_of_tries(int attempts)
{
    std::cout << "Number of attempts " << attempts << "\n";
}

void save_best_score(std::vector<int> scores)
{
    if (scores.size())
    {
        int min_score = 101;
        for (int i = 0; i < scores.size(); i++)
        {
            min_score = scores[i] < min_score ? scores[i] : min_score;
            std::cout << min_score << "\n";
        }
        std::ofstream file("scores.txt", std::ios::app);
        if (!file.is_open())
        {
            std::cout << "Unable to read the file\n";
            return;
        }
        file << min_score << "\n";
    }
}

int play_game()
{
    int rand_num = (rand() % 100) + 1;
    std::vector<int> guesses;
    std::cout << rand_num << "\n";
    int guess_num = -1;
    int attempt = 0;
    while (true)
    {
        std::cout << "Guess a num\n";
        std::cin >> guess_num;
        guesses.push_back(guess_num);
        attempt++;
        if (guess_num == rand_num)
        {
            std::cout
                << "You won!\n";
            print_guesses(guesses);
            print_count_of_tries(attempt);
            return attempt;
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
    // it does for making random num really random
    // otherwise the same sequence will be generated
    srand(time(NULL));
    int choice = 0;
    std::vector<int> scores;
    do
    {
        std::cout << "0. Quit\n1.Play Game\n";
        std::cin >> choice;
        switch (choice)
        {
        case 0:
            std::cout << "You're quit\n";
            save_best_score(scores);
            return 1;
        case 1:
            int score = play_game();
            scores.push_back(score);
            break;
        }
    } while (choice != 0);
}
