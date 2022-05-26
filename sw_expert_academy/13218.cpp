#include <iostream>
#include <string>

using namespace std;

int main() {
	int len;
	int num;
	cin >> len;

	for (int i = 0; i < len; i++) {
		cin >> num;

		if (num < 3) {
			cout << "#" << i + 1 << ' ' << 0 << '\n';
		}
		else {
			cout << "#" << i + 1 << ' ' << num/3 << '\n';
		}
	}
	return 0;
}