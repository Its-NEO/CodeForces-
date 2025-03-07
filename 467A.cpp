#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	int room_count = 0;
	for (int i = 0; i < n; i++)
	{
		int current, total;
		std::cin >> current >> total;

		if (total - current > 1)
			room_count++;
	}

	std::cout << room_count << std::endl;
}
