#include <iostream>
#include <string>

std::string toLowerCase(std::string str)
{
	std::string new_string = "";

	for (char ch : str)
		new_string = std::tolower(ch);

	return new_string;
}

int main(void)
{
	std::string a, b;
	std::cin >> a >> b;

	std::string lower_a = toLowerCase(a);
	std::string lower_b = toLowerCase(b);

	if (lower_a < lower_b)
		std::cout << -1 << std::endl;
	else if (lower_a > lower_b)
		std::cout << 1 << std::endl;
	else
		std::cout << 0 << std::endl;

	return 0;
}
