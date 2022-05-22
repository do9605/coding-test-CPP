#include <iostream>
#include <vector>

using namespace std;

void show_rank(int** arr, int num) {
	int rank;

	for (int i = 0; i < num; i++) {
		rank = 0;

		for (int j = 0; j < num; j++) {
			if ((i!=j) && (arr[i][0] < arr[j][0]) && (arr[i][1] < arr[j][1])) {
				rank++;
			}
		}
		cout << rank + 1 << ' ';
	}

	/*delete[] arr;*/

	return;
}

int main()
{
	int num;
	int** arr;

	cin >> num;

	arr = new int*[num];

	for (int i = 0; i < num; i++) {
		arr[i] = new int[2];

		for (int j = 0; j < 2; j++) {
			cin >> arr[i][j];
		}
	}

	/*for (int i = 0; i < num; i++) {
		for (int j = 0; j < 2; j++) {
			cout << arr[i][j] << ' ';
		}
		cout << '\n';
	}*/

	show_rank(arr, num);

	for (int k = 0; k < num; k++) {
		delete[] arr[k];
	}
	delete[] arr;

	return 0;
}