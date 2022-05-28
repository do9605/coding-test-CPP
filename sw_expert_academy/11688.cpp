#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void calkin_wilf(string str, int idx) {
	int a = 1;
	int b = 1;
	
	for (auto ch : str) {
		if (ch == 'L') {
			b = a + b;
		}
		else if (ch == 'R') {
			a = a + b;
		}
	}

	cout << '#' << idx << ' ' << a << ' ' << b << '\n';
}

int main() {
	int len;
	string str;

	cin >> len;

	for (int i = 0; i < len; i++) {
		cin >> str;

		calkin_wilf(str, i + 1);
	}

	return 0;
}