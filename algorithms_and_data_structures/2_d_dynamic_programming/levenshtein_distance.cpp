#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int levenshtein_distance(std::string word1, std::string word2)
{
	// initialize vector with size word2 and inside every row initialize vector of size of 1 word
	std::vector<std::vector<int>> dp(word2.size() + 1, std::vector<int>(word1.size() + 1));
	for(int i = 0; i < dp.size(); i++)
	{
		dp[i][0] = i;
	}
	for(int i = 0; i < dp[0].size(); i ++)
	{
		dp[0][i] = i;
	}
	for(int row = 1; row < dp.size(); ++row)
	{
		for (int col = 1; col < dp[0].size(); ++col)
		{
			if (word1[col - 1] == word2[row - 1])
			{
				dp[row][col] = dp[row - 1][col - 1]; 
			}
			else
			{
				dp[row][col] = std::min({dp[row][col - 1], dp[row - 1 ][col], dp[row-1][col-1]}) + 1;
				
			}
		}
	}
	for (int row = 0; row < dp.size(); ++row)
	{
		for(int col = 0; col < dp[0].size(); ++col)
		{
			std::cout << dp[row][col] << '\t';
		}
		std::cout << '\n';
	}
	return dp[dp.size()-1][dp[0].size()-1];

}
int main()
{
	std::string word1 = "string";
	std::string word2 = "master";
	std::cout <<levenshtein_distance(word1, word2);

}
