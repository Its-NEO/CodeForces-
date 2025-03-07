#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	int y;
	std::cin >> y;

	while (true)
	{
		y++;

		std::string year = std::to_string(y);

		bool flag = true;
		for (auto ch : year)
			if (std::count(year.begin(), year.end(), ch) > 1)
				flag = false;

		if (flag)
		{
			std::cout << y << std::endl;
			break;
		}
	}
		return 0;
}
