#include <iostream>

int main()
{
	int k, n, w;
	std::cin >> k >> n >> w;

	int cost = 0;
	for (int i = 1; i <= w; i++)
	{
		cost += k * i;
	}

	if (cost > n)
		std::cout << (cost - n) << std::endl;
	else
		std::cout << 0 << std::endl;
}




