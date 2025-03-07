#include <iostream>
#include <string>

int main()
{
	std::string first, second;
	std::cin >> first;
	std::cin >> second;

	std::string output;

	for (int i = 0; i < first.size(); i++)
	{
		char ch = first[i];
		output = ch + output;
	}

	if (second == output)
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
}
