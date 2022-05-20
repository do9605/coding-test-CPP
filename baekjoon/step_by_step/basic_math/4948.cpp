#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int num;
	int count;
	int* arr;

	cin >> num;
	while(num != 0) {
		count = 0;
		arr = new int[2 * num + 1];

		arr[0] = 0;

		for (int i = 2; i <= 2 * num; i++) {
			arr[i] = i;
		}

		for (int j = 2; j <= 2 * num; j++) {
			if (arr[j] == 0) {
				continue;
			}

			for (int k = j + j; k <= 2 * num; k += j) {
				arr[k] = 0;
			}
		}

		/*for (int i = num; i <= 2 * num; i++) {
			cout << "i : " << i << " num : " << arr[i] << endl;
		}*/

		for (int l = num+1; l <= 2 * num; l++) {
			if (arr[l] != 0) {
				count += 1;
			}
		}
		cout << count << '\n';
		cin >> num;
	}

	return 0;
}