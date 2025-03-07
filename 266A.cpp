#include <iostream>
#include <string>

int main()
{
	int n;
	std::cin >> n;
	std::cin.ignore();

	int count;
	char pc = 'X';
	for (int i = 0; i < n; i++)
	{
		char cc;
		std::cin >> cc;

		if (pc == cc)
			count++;
		else
			pc = cc;
	}

	std::cout << count - 1 << std::endl;
}

