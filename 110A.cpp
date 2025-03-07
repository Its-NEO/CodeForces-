#include <iostream>

int main()
{
	unsigned long long int n;
	std::cin >> n;
	int count = 0;

	while (n > 0)
	{
		unsigned long long int digit = n % 10;
		if (digit == 4 || digit == 7)
			count++;
		n /= 10;
	}

	while (count > 0)
	{
		int digit = count % 10;
		if (digit != 4 && digit != 7)
		{
			std::cout << "NO" << std::endl;
			return 0;
		}
		
		count /= 10;
	}

	std::cout << "YES" << std::endl;
	return 0;
}
