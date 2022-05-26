#include <iostream>

using namespace std;

int main() {
	int len;
	int day;
	int temp;
	int temp_j;
	int min;
	int idx;
	char arr[7];
	cin >> len;

	for (int i = 0; i < len; i++) {
		cin >> day;

		min = 0;

		for (auto &val : arr) {
			cin >> val;
		}

		/*for (auto j : arr) {
			cout << j << endl;
		}*/

		for (int j = 0; j < 7; j++) {
			temp = 0;
			idx = 0;
			temp_j = j;

			while (temp != day) {
				if (arr[temp_j++ % 7] == '1') {
					temp++;
				}

				idx++;
			}

			if (min == 0 || min > idx) {
				min = idx;
			}
		}

		cout << '#' << i + 1 << ' ' << min << '\n';
	}

	return 0;
}