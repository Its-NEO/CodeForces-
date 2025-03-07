#include <iostream>

bool islucky(int num)
{
	while (num > 0)
	{
		int digit = num % 10;
		if (digit != 4 && digit != 7)
			return false;

		num /= 10;
	}

	return true;
}

int main()
{
	int n;
	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0 && islucky(i))
		{
			std::cout << "YES" << std::endl;
			return 0;
		}
	}

	std::cout << "NO" << std::endl;
	return 0;
}
