#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	int sum_x = 0, sum_y = 0, sum_z = 0;
	for (int i = 0; i < n; i++)
	{
		int x = 0, y = 0, z = 0;
		std::cin >> x >> y >> z;

		sum_x += x;
		sum_y += y;
		sum_z += z;
	}

	if (sum_x == 0 && sum_y == 0 && sum_z == 0)
		std::cout << "YES" << std::endl;
	else 
		std::cout << "NO" << std::endl;
}


		
