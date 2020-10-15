#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string word = "Success";
    std::string word_with_small_letters;
    std::string encoded_word = "";

    for (int i = 0; i < word.size(); i++)
    {
        if (isupper(word[i]))
        {
            word_with_small_letters += (char)tolower(word[i]);
        }
        else 
        {
            word_with_small_letters += word[i];
        }
    }
    // std::cout << word_with_small_letters << '\n';
    for (int i = 0; i < word_with_small_letters.size(); i++)
    {
        int occur = std::count(word_with_small_letters.begin(), word_with_small_letters.end(), word_with_small_letters[i]);
        // std::cout << word_with_small_letters[i] << " " << occur << '\n';
        if (occur == 1)
        {
            encoded_word += "(";
        }
        else
        {
            encoded_word += ")";
        }
    }
    std::cout << encoded_word << '\n';
    std::cout << word << '\n';
}