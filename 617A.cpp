#include <iostream>

int main()
{
	int a;
	std::cin >> a;

	int steps = 0;
	steps += a / 5;

	a %= 5;
	steps += a / 4; 

	a %= 4;
	steps += a / 3; 

	a %= 3;
	steps += a / 2; 

	a %= 2;
	steps += a; 

	std::cout << steps;
}
