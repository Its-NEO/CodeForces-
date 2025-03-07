#include <iostream>

int main()
{
	int n, h;
	std::cin >> n >> h;

	int w = 0;
	for (int i = 0; i < n; i++)
	{
		int p;
		std::cin >> p;

		if (p > h)
			w += 2;
		else
			w += 1;
	}

	std::cout << w << std::endl;
}

