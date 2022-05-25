#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int* arr;
int* new_arr;

void merge(int start, int end) {
	int m = (start + end) / 2;
	int i = start;
	int j = m + 1;
	int k = start;

	while (i <= m && j <= end) {
		if (arr[i] < arr[j]) {
			new_arr[k++] = arr[i++];
		}
		else {
			new_arr[k++] = arr[j++];
		}
	}

	for (k; k <= end; k++) {
		if(i>m)
			new_arr[k] = arr[j++];
		else
			new_arr[k] = arr[i++];
	}
	
	for (int t = start; t <= end; t++) {
		arr[t] = new_arr[t];
	}
}

void partition(int start, int end) {
	int m;

	if (start < end) {
		m = (start + end) / 2;

		partition(start, m);
		partition(m + 1, end);
		merge(start, end);
	}
}

bool binarySearch(int len, int target) {
	int start = 0;
	int end = len - 1;
	int m;

	while (start <= end) {
		m = (start + end) / 2;

		if (arr[m] == target)
			return true;
		else {
			if (arr[m] < target) {
				start = m + 1;
			}
			else {
				end = m - 1;
			}
		}
	}

	return false;
}

int main() {
	int len1, len2;
	int* sang;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> len1;

	arr = new int[len1];
	new_arr = new int[len1];

	for (int i = 0; i < len1; i++) {
		cin >> arr[i];
	}

	partition(0, len1 - 1);

	/*for (int i = 0; i < len; i++) {
		cout << arr[i];
	}*/

	cin >> len2;

	sang = new int[len2];

	for (int i = 0; i < len2; i++) {
		cin >> sang[i];
	}

	for (int i = 0; i < len2; i++) {
		cout << binarySearch(len1, sang[i]) << ' ';
	}

	return 0;
}