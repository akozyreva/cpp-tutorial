#include <iostream>

int main()
{
	int n = 1;
	int max = 0;
	while (n != 0)
	{
		std::cin >> n;
		if(n % 2 != 0)
		{
			continue;
		}
		if(n > max)
		{
			max = n;
		}
	}
	std::cout << max << '\n';

}
