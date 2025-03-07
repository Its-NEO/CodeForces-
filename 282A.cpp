#include <iostream>
#include <string>

int main()
{
	int n;
	std::cin >> n;
	std::cin.ignore();

	int x = 0;

	for (int i = 0; i < n; i++)
	{
		std::string input;
		std::getline(std::cin, input);

		if (input[1] == '+')
			x++;
		else
			x--;
	}

	std::cout << x << std::endl;
}

