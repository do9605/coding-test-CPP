#include <iostream>
using namespace std;


int main() {
	int n;
	int arr[100];
	int count = 0, sum = 0;
	cin >> n;

	while (n != -1) {
		for (int i = 1; i != n; i++) {
			if (n % i == 0)
				arr[count++] = i;
		}

		for (int j = 0; j != count; j++) {
			sum += arr[j];
		}

		if (sum == n) {
			cout << n << " " << "= ";
			for (int i = 0; i != count; i++)
				(i == 0) ? (cout << arr[i]) : (cout << " + " << arr[i]);
			cout << '\n';
		}
		else {
			cout << n << " is NOT perfect.\n";
		}
		sum = 0;
		count = 0;
		cin >> n;
	}
	return 0;
}