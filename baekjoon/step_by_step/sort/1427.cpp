#include <iostream>

using namespace std;

void heapify(int arr[], int root, int num) {
	int temp = arr[root];
	int child = root * 2;

	while (child <= num) {
		if (child < num && arr[child] > arr[child + 1]) {
			child++;
		}

		if (arr[child] < temp) {
			arr[child / 2] = arr[child];
			child *= 2;
		}
		else
			break;
	}
	arr[child / 2] = temp;
}

void heapsort(int arr[], int num) {
	int temp;

	for (int i = num / 2; i >= 1; i--) {
		heapify(arr, i, num);
	}

	for (int i = num; i >= 1; i--) {
		temp = arr[1];
		arr[1] = arr[i];
		arr[i] = temp;

		heapify(arr, 1, i - 1);
	}
}

int main() {
	unsigned long num;
	int len = 1;
	int arr[10];

	cin >> num;

	while (num > 0) {
		arr[len++] = num % 10;
		num /= 10;
	}

	heapsort(arr, len-1);

	for (int i = 1; i <= len-1; i++) {
		cout << arr[i];
	}

	return 0;
}