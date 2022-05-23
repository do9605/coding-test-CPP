#include <iostream>

using namespace std;

void quicksort(int* arr, int start, int end) {
	int pivot = start;
	int i = start+1;
	int j = end;
	int temp;

	while (i<=j) {
		while (arr[i] <= arr[pivot]) {
			i++;
		}
		while ((arr[j] >= arr[pivot]) && (j > start)) {
			j--;
		}
		if (i > j) {
			temp = arr[j];
			arr[j] = arr[pivot];
			arr[pivot] = temp;
		}
		else {
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}

	quicksort(arr, start, j - 1);
	quicksort(arr, j + 1, end);
}

int main() {
	int num;
	int* arr;

	cin >> num;

	arr = new int[num];

	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}

	quicksort(arr, 0, num - 1);

	/*for (int i = 0; i < num; i++) {
		cout << arr[i];
	}*/

	delete[] arr;

	return 0;
}