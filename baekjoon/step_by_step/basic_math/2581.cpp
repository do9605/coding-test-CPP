#include <iostream>

using namespace std;

int main()
{
	int start, end;
	bool check = true;
	int sum = 0;
	int idx = 0;
	int* arr = NULL;

	cin >> start >> end;

	arr = new int[end - start + 1];

	for (int i = start; i <= end; i++) {
		check = true;

		for (int j = 2; j <= i/2; j++) {
			if (i%j == 0) {
				check = false;
				break;
			}
		}
		if (check && i != 1) {
			arr[idx] = i;
			sum += i;
			idx++;
		}
	}

	if (idx == 0) {
		cout << -1 << '\n';
	}
	else {
		cout << sum << '\n';
		cout << arr[0] << '\n';
	}

	delete[] arr;

	return 0;
}