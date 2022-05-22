#include <iostream>

using namespace std;

int main() {	
	int num;
	int i = 666;
	int temp;
	int count = 0;
	int end_count = 0;

	cin >> num;

	while (end_count != num) {
		count = 0;
		temp = i;

		while (temp != 0 && count != 3) {
			if (temp % 10 == 6) {
				count++;
			}
			else {
				count = 0;
			}
			temp /= 10;
		}

		if (count == 3)
			end_count++;

		i++;
	}

	cout << i - 1 << '\n';

	return 0;
}