#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int len;
	int p_len;
	int count;
	int* p;

	cin >> len;

	for (int i = 0; i < len; i++) {
		count = 0;

		cin >> p_len;
		p = new int[p_len];

		for (int j = 0; j < p_len; j++) {
			cin >> p[j];
		}

		for (int k = 1; k < p_len - 1; k++) {
			if (p[k] != max(p[k - 1], max(p[k], p[k + 1])) && p[k] != min(p[k - 1], min(p[k], p[k + 1]))) {
				count++;
			}
		}

		cout << '#' << i + 1 << " " << count << '\n';

		delete[] p;
	}

	return 0;
}