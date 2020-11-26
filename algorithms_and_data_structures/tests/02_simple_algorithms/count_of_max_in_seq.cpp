#include <iostream>

const int SIZE = 10000;

int main()
{
	int arr[SIZE] = {0};
	int arr_index = 0;
	int n = 1;
	int max = 0;
	int count_max = 0;
	while (n != 0)
	{
		std::cin >> n;
		arr[arr_index] = n;
		arr_index ++;
		if(max < n)
		{
			max = n;
		}
	}	
	for(int i = 0; i < arr_index; i++)
	{
		if(arr[i] == max)
			count_max++;
	}
	std::cout << count_max << '\n';

}
