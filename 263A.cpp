#include <iostream>

int main(void)
{
	int x = 0, y = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int buffer;
			std::cin >> buffer;

			if (buffer == 1)
			{
				x = i + 1;
				y = j + 1;

				break;
			}
		}
		std::cin.ignore();
	}

	int x_diff = std::abs(3 - x);
	int y_diff = std::abs(3 - y);
	std::cout << x_diff + y_diff << std::endl;
}
