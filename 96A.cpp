#include <iostream>
#include <string>

int main()
{
	std::string input;
	std::cin >> input;

	int count = 1;
	char prev = input[0];
	for (int i = 1; i < input.size(); i++)
	{
		if (input[i] == prev)
			count++;
		else 
			count = 1;

		if (count == 7)
		{
			std::cout << "YES" << std::endl;
			return 0;
		}

		prev = input[i];
	}

	std::cout << "NO" << std::endl;
	return 0;
}

