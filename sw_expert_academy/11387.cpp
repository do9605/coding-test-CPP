#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main() {
	int len;
	int sum = 0;
	int d, l, n;

	cin >> len;

	for (int i = 0; i < len; i++) {
		cin >> d >> l >> n;

		//sum += d;

		for (int j = 1; j <= n; j++) {
			//sum += d * (1 + (j-1) * l / 100);
			sum += d * 1 + d * (j - 1) * l / 100;
		}

		cout << '#' << i + 1 << ' ' << sum << '\n';
		sum = 0;
	}

	return 0;
}