#include <iostream>

using namespace std;

int arr[10001] = { 0, };

int main() {
	int num;
	int temp;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> temp;
		arr[temp]++;
	}

	for (int i = 1; i < 10001; i++) {
		if (arr[i] != 0) {
			for (int j = 0; j < arr[i]; j++) {
				cout << i << '\n';
			}
		}
	}


	return 0;
}