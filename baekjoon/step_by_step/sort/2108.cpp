#include <iostream>

using namespace std;

int get_avg(int arr[], int num) {
	double sum = 0.0;

	for (int i = 0; i < 8002; i++) {
		if (arr[i] != 0) {
			sum += (i - 4001)*arr[i];
		}
	}

	sum /= num;

	if (sum > 0)
		return int(sum + 0.5);
	else
		return int(sum - 0.5);
}

int get_median(int arr[], int num) {
	int count = 0;

	for (int i = 0; i < 8002; i++) {
		if (arr[i] != 0) {
			count += arr[i];
		}

		if (count >= (num / 2 + 1)) {
			return i - 4001;
		}
	}
}

int get_freq(int arr[], int num) {
	int val;
	int temp;
	int freq = 0;
	int count = 0;

	for (int i = 0; i < 8002; i++) {
		if (freq < arr[i])
			freq = arr[i];
	}

	for (int i = 0; i <= 8001; i++) {
		if (freq == arr[i]) {
			count++;
			val = i - 4001;
		}

		if (count == 2) {
			break;
		}
	}
	return val;
}

int get_range(int arr[], int num) {
	int max, min;

	for (int i = 8001; i >= 0; i--) {
		if (arr[i] != 0) {
			max = i - 4001;
			break;
		}
	}

	for (int i = 0; i <= 8001; i++) {
		if (arr[i] != 0) {
			min = i - 4001;
			break;
		}
	}

	return max - min;
}

int main() {
	int num;
	int arr[8002] = { 0,};
	int temp;

	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> temp;

		// 음수 - 1~4000, 0과 양수 4001~8001
		arr[temp + 4001] += 1;
	}

	cout << get_avg(arr, num) << '\n';
	cout << get_median(arr, num) << '\n';
	cout << get_freq(arr, num) << '\n';
	cout << get_range(arr, num) << '\n';

	return 0;
}