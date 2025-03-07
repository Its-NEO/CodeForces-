#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int best_fit(vector<string> input, vector<string>& result) {
	if (input.empty())
	{
		return 0;
	}

	string word = input[0];

	for (int i = 4; i >= 1; i--) {
		string subword = word.substr(0, i);

		if (find(result.begin(), result.end(), subword) == result.end())
		{
			result.push_back(subword);

			if (best_fit(vector<string> (input.begin() + 1, input.end()), result) == 0) {
				return 0;
			}

			result.pop_back();
		}
	}

	return -1;
}

int main() {
	int n;
	cin >> n;
	vector<string> words;

	for (int i = 0; i < n; i++)
	{
		string word;
		cin >> word;

		words.push_back(word);
	}

	vector<string> result;
	best_fit(words, result);

	if (result.empty())
	{
		cout << -1;
		return 0;
	}

	for (auto const& r : result)
	{
		cout << r << endl;
	}

	return 0;
}
