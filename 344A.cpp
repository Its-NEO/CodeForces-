#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	int prev;
	std::cin >> prev;

	int count = 1;
	for (int i = 1; i < n; i++)
	{
		int curr;
		std::cin >> curr;

		if (curr != prev)
			count++;
		
		prev = curr;
	}

	std::cout << count << std::endl;
}
