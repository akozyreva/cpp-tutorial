#include <iostream>


void is_num_power_of_two(int num)
{
	int two_powered_num = 2;
	while (two_powered_num < num)
	{
		two_powered_num *= 2;
	}
	if (num == two_powered_num)
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
	int num;
	std::cin >> num;
	if (num > 10000)
	{
		std::cout << "Num must not be > 10000\n";
		exit(-1);
	}
	is_num_power_of_two(num);
	
}
