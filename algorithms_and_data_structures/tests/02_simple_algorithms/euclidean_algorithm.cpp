#include <iostream>

int nod(int a, int b)
{
	if(a == 0 ||  b == 0)
	{
		return a + b;
	} 
	else 
	{
		if(a > b)
		{
			nod(a % b, b);
		}
		else 
		{
			nod(a, b % a);
		}

	}


}

int main ()
{
	int a;
	int b;
	std::cin >> a;
	std::cin >> b;
	int n = nod(a, b);
	std::cout << n << '\n';
}
