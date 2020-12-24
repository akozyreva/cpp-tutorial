#include <iostream>
#include <ctime>
#include <algorithm>
/*
Кузнечик прыгает по столбикам, расположенным на одной линии на равных расстояниях друг от друга. Столбики имеют порядковые номера от 1 до N . В начале Кузнечик сидит на столбике с номером 1. Он может прыгнуть на следующий столбик или сразу на второй столбик, считая от текущего. Требуется найти мин стоимость прохода*/
void print_prices(int arr[], int size)
{
        for(int i = 0; i < size; i ++)
        {
                std::cout << arr[i] << '\t';
        }
        std::cout << '\n';
}
void  min_cost(int n, int prices[])
{
	int *cost = new int[n];
	cost[0] = prices[0];
	cost[1] = prices[0] + prices[1];
	int sum = cost[1];
	for(int i = 2; i <= n; i++)
	{	
		cost[i] = std::min(cost[i - 1], cost[i - 2]) + prices[i];
		sum += cost[i];
	}
	print_prices(cost, n);	
	std::cout << "Min cost is " << sum << '\n';
	delete[] cost;
}
int main()
{
	int n;
	std::cout << "Enter n \n";
	std::cin >> n;
	srand(time(NULL));
	int *prices = new int[n];
	for (int i = 0; i < n; i++)
	{
		prices[i] = (rand() % 10) + 1;
	}

	print_prices(prices, n);			
	min_cost(n, prices);	
	delete[] prices;
}
