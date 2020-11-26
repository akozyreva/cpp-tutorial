#include <iostream>
// idea is to define, how many combinations can be created
// 3 -> 123, 213, 312, ....
void permutations(int16_t current, int16_t buffer[], int16_t number)
{
	const int NUM = 3; // must be the same as int16_t number!
	static bool used[NUM] = {false}; // suspect, that all arr will be inited with 0 as false variables
	if(current == number)
	{
		for(int i = 0; i < number; i ++)
			std::cout << buffer[i] << '\t';
		std::cout << '\n';
	}
	else 
	{
	 	for (int16_t variant = 0; variant < number; variant ++ )
		{
		if(not used[variant]) // cuttin the recursive tree
			{	
			buffer[current] = variant;
			used[variant] = true;
			permutations(current + 1, buffer, number);
			used[variant] = false;		
			}
		}
	}


}

int main()
{
// can be used only for small numbers - before 10
// otherwise another algorithm must be used
// negative numbers can not be used also
	int n = 3;
	int16_t buffer[n];
	permutations(0, buffer, n);
}
