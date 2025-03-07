#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
	std::string input;
	std::cin >> input;

	std::vector<char> uniques;

	for (auto ch : input)
		if (std::find(uniques.begin(), uniques.end(), ch) == uniques.end())
			uniques.push_back(ch);

	if (uniques.size() % 2 == 0)
		std::cout << "CHAT WITH HER!" << std::endl;
	else
		std::cout << "IGNORE HIM!" << std::endl;
	return 0;
}
