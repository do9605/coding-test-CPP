#include <iostream>

using namespace std;

int main() {	
	int num;
	int* arr;
	int temp;

	cin >> num;

	arr = new int[num];

	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < num-1; i++) {
		for (int j = i+1; j < num; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < num; i++) {
		cout << arr[i] << '\n';
	}

	delete[] arr;
	return 0;
}