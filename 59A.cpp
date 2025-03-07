#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::string s;
	std::cin >> s;

	int uc = 0, lc = 0;

	for (auto ch : s)
	{
		if (ch >= 'A' && ch <= 'Z')
			uc++;
		else
			lc++;
	}

	if (uc > lc)
	{
		std::transform(s.begin(), s.end(), s.begin(), [](char c) { return std::toupper(c); });
		std::cout << s << std::endl;
	}
	else
	{
		std::transform(s.begin(), s.end(), s.begin(), [](char c) { return std::tolower(c); });
		std::cout << s << std::endl;
	}
}
