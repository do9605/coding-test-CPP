#include <iostream>

using namespace std;

int main() {
	int len;
	int count;
	int arr[4];

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> len;

	for (int i = 0; i < len; i++) {
		for (auto &val : arr) {
			cin >> val;
		}

		count = 0;

		for (int m = arr[0]; m <= arr[1]; m++) {
			for (int n = arr[2]; n <= arr[3]; n++) {
				if (n == m) {
					count++;
				}
			}
		}

		cout << "#" << i + 1 << ' ' << (count == 0 ? count : count-1) << '\n';
	}

	return 0;
}