#include <iostream>

int main()
{
	int sum = 0;
	int n = 1;
	while (n != 0)
	{
		std::cin >> n;
		if (n == 0)
		{
			break;
		}
		if (n % 2 == 0)
		{
			sum++;
		}

	}
	std::cout << sum << '\n';

	
}

