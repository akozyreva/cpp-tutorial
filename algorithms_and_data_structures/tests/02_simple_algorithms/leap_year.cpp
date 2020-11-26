#include <iostream>
// определить, високосный ли год или нет
void leap_year(int year)
{
	if ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		std::cout << "YES\n";
	}
	else
	{
		std::cout << "NO\n";
	}	
}



int main()
{
	int n;
	std::cin >> n;
	if (n > 100000 || n < 0)
	{ 
		std::cout << "The value n must be > 0 and < 100000\n";
		exit(-1);
	}
	leap_year(n);


	
}
