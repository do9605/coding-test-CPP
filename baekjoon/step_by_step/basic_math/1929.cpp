#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int start, end;
	int* arr;

	cin >> start >> end;

	arr = new int[end+1];

	for (int i = 2; i <= end; i++) {
		arr[i] = i;
	}

	for (int i = 2; i <= int(sqrt(end)); i++) {
		if (arr[i] == 0)
			continue;

		for (int j = i + i; j <= end; j += i) {
			arr[j] = 0;
		}
	}

	for (int i = start; i <= end; i++) {
		if (arr[i] != 0) {
			cout << arr[i] << '\n';
		}
	}

	delete[] arr;

	return 0;
}