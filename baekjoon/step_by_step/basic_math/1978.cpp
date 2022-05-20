#include <iostream>

using namespace std;

int main()
{
	int num;
	int check;
	int count = 0;
	int* arr;

	cin >> num;

	arr = new int[num];

	for (int i=0; i < num; i++) {
		cin >> arr[i];
	}

	for (int i=0; i < num; i++) {
		check = 0;

		for (int j=1; j < arr[i]; j++) {
			if (arr[i] % j == 0)
				check += 1;
		}

		if (check == 1) {
			count += 1;
		}
	}

	cout << count << '\n';

	delete[] arr;
	return 0;
}