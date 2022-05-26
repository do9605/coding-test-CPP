#include <iostream>

using namespace std;

int main() {
	int len;
	int arr[2];

	cin >> len;

	for (int i = 0; i < len; i++) {
		cin >> arr[0] >> arr[1];

		if (arr[0] + arr[1] == 24) {
			cout << "#" << i + 1 << ' ' << 0 << '\n';
		}
		else if (arr[0] + arr[1] > 24) {
			cout << "#" << i + 1 << ' ' << arr[0] + arr[1] -24 << '\n';
		}
		else {
			cout << "#" << i + 1 << ' ' << arr[0] + arr[1] << '\n';
		}
	}
	return 0;
}