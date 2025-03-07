#include <iostream>
#include <string>

int main(void)
{
	int n, k;
	std::cin >> n >> k;
	std::cin.ignore();

	int a[n];
	for (int i = 0; i < n; i++)
		std::cin >> a[i];

	int count = 0;
	for (int i = 0; i < n; i++)
		if (a[i] >= a[k - 1] && a[i])
			count++;

	std::cout << count << std::endl;
	return 0;
}
