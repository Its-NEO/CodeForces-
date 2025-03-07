#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	int anton = 0, danik = 0;
	for (int i = 0; i < n; i++)
	{
		char ch;
		std::cin >> ch;

		if (ch == 'A')
			anton++;
		else
			danik++;
	}

	if (anton > danik)
		std::cout << "Anton" << std::endl;
	else if (danik > anton)
		std::cout << "Danik" << std::endl;
	else 
		std::cout << "Friendship" << std::endl;

	return 0;
}
