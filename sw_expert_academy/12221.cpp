#include <iostream>

using namespace std;

int main() {
	int len;
	int input[2];

	cin >> len;

	for (int i = 0; i < len; i++) {
		cin >> input[0] >> input[1];

		if (input[0] < 10 && input[1] < 10) {
			cout << '#' << i + 1 << ' ' << input[0] * input[1] << '\n';
		}
		else{
			cout << '#' << i + 1 << ' ' << -1 << '\n';
		}
	}
	

	return 0;
}