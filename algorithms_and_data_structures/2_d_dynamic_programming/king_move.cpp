#include <iostream>

/*
Task about king in chess - his move only on 1 cell vertically or horizotally. What is the number of ways to achive cell on m,n pos?
*/
// VERY SLOW! NOT USE!
int king_recursive(int i, int j)
{
	if(i == 1 or j == 1)
	{
		return 1;
	}
	else
	{
		return king_recursive(i, j - 1) + king_recursive(i - 1, j);
	}
}
int king_dynamic(int i, int j)
{
	int *king = new int[i * j]();
	for(int row = 0; row < i; row ++)
		{
			// every row begins from 1
			king[row * j] = 1;
			for(int col = 1; col < j; col ++)
			{
				if(row == 0)
				{
					king[col] = 1;
				} else
				{
					king[row * j + col] = king[ (row * j) + (col - 1)] + king[( (row - 1) * j) + col];
				}
			}
		}
	/*for(int y = 0; y < i*j; y++)
	{		
		std::cout<< y  << '\n';
		std::cout << king[y]<< '\t';
	}*/
	int res = king[i * j -1];
	delete[] king;
	return res;
}
int main()
{
	int i = 4;
	int j = 5;
	
	std::cout << "Recursive desicion " << king_recursive(i, j) << '\n';
	std::cout << "Dynamic desicion " << king_dynamic(i, j) << '\n';
	
}
