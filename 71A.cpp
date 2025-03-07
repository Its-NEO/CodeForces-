#include <iostream>
#include <string>
#include <vector>

int main(void)
{
	int n = 0;
	std::cin >> n;

	std::vector<std::string> words;

	for (int i = 0; i < n; i++)
	{
		std::string word;
		std::cin >> word;

		if (word.size() <= 10)
			words.push_back(word);
		else {
			std::string new_word;
			new_word += word[0];
			new_word += std::to_string(word.size() - 2);
			new_word += word[word.size() - 1];

			words.emplace_back(new_word);
		}
	}

	for (auto const& e : words)
		std::cout << e << std::endl;
}
