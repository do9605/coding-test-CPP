#include <iostream>

using namespace std;

int* arr;

void swap(int* arr, int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void heapify(int* arr, int root, int n) {
	int temp = arr[root];
	int child = root * 2;

	while (child <= n) {
		if (child < n && arr[child] < arr[child + 1])
			child++;

		if (arr[child] > temp) {
			arr[child / 2] = arr[child];
			child *= 2;
		}
		else
			break;
	}
	arr[child / 2] = temp;
}

void heapsort(int n) {
	for (int i = n / 2; i > 0; i--) {
		heapify(arr, i, n);
	}

	for (int i = n; i > 0; i--) {
		swap(arr, 1, i);
		heapify(arr, 1, i - 1);
	}
}

int main() {
	int num;
	cin >> num;

	arr = new int[num+1];

	for (int i = 1; i < num+1; i++) {
		cin >> arr[i];
	}

	heapsort(num);

	for (int i = 1; i <= num; i++) {
		cout << arr[i] << ' ';
	}

	delete[] arr;

	return 0;
}