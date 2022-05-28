#include <iostream>
using namespace std;

int dot_score(int x, int y, int len) {
	if (x*x + y * y <= 20 * 20) {
		return 10;
	}
	else if (x*x + y * y <= 40 * 40) {
		return 9;
	}
	else if (x*x + y * y <= 60 * 60) {
		return 8;
	}
	else if (x*x + y * y <= 80 * 80) {
		return 7;
	}
	else if (x*x + y * y <= 100 * 100) {
		return 6;
	}
	else if (x*x + y * y <= 120 * 120) {
		return 5;
	}
	else if (x*x + y * y <= 140 * 140) {
		return 4;
	}
	else if (x*x + y * y <= 160 * 160) {
		return 3;
	}
	else if (x*x + y * y <= 180 * 180) {
		return 2;
	}
	else if (x*x + y * y <= 200 * 200) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	int len;
	int inner_len;
	int x, y;
	int sum = 0;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> len;

	for (int i = 0; i < len; i++) {
		cin >> inner_len;

		for (int j = 0; j < inner_len; j++) {
			cin >> x >> y;

			sum += dot_score(x, y, inner_len);
		}
		cout << "#" << i + 1 << ' ' << sum << '\n';

		sum = 0;
	}

	return 0;
}