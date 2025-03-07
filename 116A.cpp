#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	int cp = 0;
	int max_p = 0;

	for (int i = 0; i < n; i++)
	{
		int a, b;
		std::cin >> a >> b;

		cp -= a;
		cp += b;

		if (cp > max_p)
			max_p = cp;
	}

	std::cout << max_p << std::endl;
}
