#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string str1, string str2) {
	if (str1.length() == str2.length()) {
		return str1 < str2;
	}
	return str1.length() < str2.length();
}

int main() {
	int len;
	string temp_str;
	vector<string> str_vec;

	cin >> len;

	for (int i = 0; i < len; i++) {
		cin >> temp_str;
		str_vec.push_back(temp_str);
	}

	sort(str_vec.begin(), str_vec.end(), compare);

	cout << str_vec[0] << '\n';

	for (int j = 1; j < len; j++) {
		if (str_vec[j - 1] != str_vec[j]) {
			cout << str_vec[j] << '\n';
		}
	}

	return 0;
}