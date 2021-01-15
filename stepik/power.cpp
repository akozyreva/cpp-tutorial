#include <iostream>
int power(int x, unsigned p) {
    int answer = x;
    if (x == 0)
	return 0;
    if (p == 0 or x == 1)
        return 1;
    for(int i = 2; i <=p; i++)
        answer *= x;
   	std::cout<< answer << '\n';
    return answer;
}

int main()
{
	int a = power(2, 3);
	std::cout << a << '\n';
}
