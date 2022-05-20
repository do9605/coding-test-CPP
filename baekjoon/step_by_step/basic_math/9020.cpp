#include <iostream>
#include <cmath>

using namespace std;

int* prime_arr(int range = 10000) {
	int* arr = new int[range+1];

	for (int i = 2; i <= range; i++) {
		arr[i] = i;
	}

	for (int i = 2; i <= int(sqrt(range)); i++) {
		if (arr[i] == 0)
			continue;

		for (int j = i*i; j <= range; j += i) {
			arr[j] = 0;
		}
	}

	return arr;
}

int main()
{
	int count;
	int check;
	int num;
	int* arr = prime_arr();
	int i, j, m;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> count;

	while(count--) {
		cin >> num;

		m = num >> 1;

		check = true;

		for (i = m; i >= 2; i--) {
			if (arr[i] != 0) {
				for (j = m; j < num; j++) {
					if ((arr[j] != 0) && (arr[i] + arr[j] == num)) {
						cout << i << ' ' << j << '\n';
						check = false;
					}
				}
			}
			if (!check)
				break;
		}
	}

	delete[] arr;
	return 0;
}