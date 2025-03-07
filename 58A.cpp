#include <iostream>
#include <string>

int main()
{
	std::string s;
	std::cin >> s;

	std::string check_word = "hello";
	int word_ptr = 0;
	std::string output = "";

	for (int i = 0; i < s.size(); i++)
	{
		char ch = s[i];
		if (ch == check_word[word_ptr])
		{
			output += ch;
			word_ptr++;
		}
	}

	if (output == check_word)
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
}



