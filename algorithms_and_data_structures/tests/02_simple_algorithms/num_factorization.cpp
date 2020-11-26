#include <iostream>

void num_factorization(int num)
{
	int i = 1;
	while (i < num)
	{
		i++;
		if(num % i == 0)
		{
			std::cout << i << '\n';
			num_factorization(num/i);
			break;

		}
		
	}
}
int main()
{
	int n;
	std::cin >> n;
	num_factorization(n);
}
