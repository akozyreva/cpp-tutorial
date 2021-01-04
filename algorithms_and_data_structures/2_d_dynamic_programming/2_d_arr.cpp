#include <iostream>

int main()
{
	int i = 4;
	int j = 5;
	int *arr = new int[i * j];
	for (int y = 0; y < i; y ++)
	{
		for (int x = 0; x < j; x ++)
		arr[y + x] = y + x;
	}
	for(int y = 0; y < i; y++)
	{	
	for (int x = 0; x < j; x ++)
		std::cout << arr[y+x] << '\t';
	std::cout << '\n';
	}
}
