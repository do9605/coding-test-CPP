#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	int val;
	int n, m;
	int sum;
	int temp_num;
	vector<int> vec;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> val;
		vec.push_back(val);
	}

	for (int i = 0; i < n - 2; i++) {
		for (int j = i+1; j < n - 1; j++) {
			for (int k = j+1; k < n; k++) {
				temp_num = vec[i] + vec[j] + vec[k];

				if (i == 0 && j == 1 && k == 2) {
					sum = temp_num;
				}
				else if (temp_num <= m && abs(temp_num-m) < abs(sum-m)) {
					/*cout << vec[i] << ' ' << vec[j] << ' ' <<  vec[k] << '\n';*/
					sum = temp_num;
				}
			}
		}
	}

	cout << sum << '\n';

	return 0;
}