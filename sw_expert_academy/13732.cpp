#include <iostream>

using namespace std;

char arr[20][20];

int main() {
	int num;
	int inner_num;
	int x_min=20, x_max=-1, y_min=20, y_max=-1;

	cin >> num;

	for (int k = 0; k < num; k++) {
		cin >> inner_num;

		for (int i = 0; i < inner_num; i++) {
			for (int j = 0; j < inner_num; j++) {
				cin >> arr[i][j];
			}
		}

		for (int i = 0; i < inner_num; i++) {
			for (int j = 0; j < inner_num; j++) {
				if (arr[i][j] == '#') {
					x_min = (x_min > i ? i : x_min);
					x_max = (x_max < i ? i : x_max);
					y_min = (y_min > j ? j : y_min);
					y_max = (y_max < j ? j : y_max);
				}
			}
		}

		/*cout << x_min << ' ' << x_max << ' ' << y_min << ' ' << y_max << endl;*/

		if (x_max - x_min != y_max - y_min) {
			cout << '#' << k + 1 << ' ' << "no" << '\n';
		}
		else {
			int m, n;

			for (m = x_min; m <= x_max; m++) {
				for (n = y_min; n <= y_max; n++) {
					if (arr[m][n] != '#') {
						cout << '#' << k + 1 << ' ' << "no" << '\n';
						break;
					}
				}
				if (n <= y_max) {
					break;
				}
			}

			if (m > x_max) {
				cout << '#' << k + 1 << ' ' << "yes" << '\n';
			}
		}

		x_min = 20, x_max = -1, y_min = 20, y_max = -1;
	}
	/*cout << x_min << ' ' << x_max << ' ' << y_min << ' ' << y_max << endl;*/


	return 0;
}