#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	getline(cin, input);

	string vowels = "aeiouAEIOU";
	string output = "";

	for (int i = 0; i < input.length(); i++)
	{
		char c = input[i];
		if (vowels.find(c) == string::npos)
		{
			output += '.';
			output += (char) ::tolower(c);
		}
	}

	cout << output;
}
