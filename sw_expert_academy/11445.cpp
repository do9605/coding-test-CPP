#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void string_check(string p, string q, int idx) {
	bool check = false;

	if (p != q) {
		if (p + 'a' != q) {
			check = true;
		}
	}	
	
	if (check) {
		cout << '#' << idx << " Y" << '\n';
	}
	else {
		cout << '#' << idx << " N" << '\n';
	}
}

int main() {
	int len;
	string p, q;

	cin >> len;

	for (int i = 0; i < len; i++) {
		cin >> p >> q;

		string_check(p, q, i + 1);
	}

	return 0;
}