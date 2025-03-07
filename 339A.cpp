#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

int main()
{
	std::string input;
	std::cin >> input;

	std::stringstream stream(input);
	std::string token;

	std::vector<int> tokens;
	
	while(std::getline(stream, token, '+'))
		tokens.push_back(std::stoi(token));

	std::sort(tokens.begin(), tokens.end());

	for (int i = 0; i < tokens.size(); i++)
	{
		std::cout << tokens[i];
		if (i != tokens.size() - 1)
			std::cout << "+";
		else
			std::cout << std::endl;
	}
}
