#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int len;
	string s;

	cin >> len;

	for (int i = 0; i < len; i++) {
		cin >> s;

		sort(s.begin(), s.end());

		if (s[0] == s[1] && s[2] == s[3] && s[1] != s[2]) {
			cout << '#' << i + 1 << " Yes" << '\n';
		}
		else {
			cout << '#' << i + 1 << " No" << '\n';
		}
	}
	return 0;
}