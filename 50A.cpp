#include <iostream>

int main(void)
{
	int m, n;
	std::cin >> m >> n;

	if (m % 2 == 0)
	{
		std::cout << (m / 2) * n << std::endl;
	}
	else if (n % 2 == 0)
	{
		std::cout << (n / 2) * m << std::endl;
	}
	else
	{
		std::cout << (m / 2) * n + (n / 2) << std::endl;
	}
}
