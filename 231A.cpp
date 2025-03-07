#include <iostream>

int main(void)
{
	int n;
	std::cin >> n;
	
	int total = 0;

	for (int i = 0; i < n; i++)
	{
		std::string input_line;
		std::cin >> input_line;

		int agreements = 0;

		while (input_line.size() > 0)
		{
			if (input_line.back() == '1')
				agreements++;
			input_line.pop_back();
		}

		if (agreements > 1)
			total++;
	}

	std::cout << total << std::endl;
}
