#include <iostream>
#include <string>
#include <algorithm>
#include <utility>

using namespace std;

int pos_count(int num) {
	int count = 0;

	while (num > 0) {
		count++;
		num /= 10;
	}

	return count;
}

int main() {
	int len;
	int mult = 2;
	int temp;
	int base_pose_count;
	int* arr;
	string temp_str1, temp_str2;

	cin >> len;

	arr = new int[len];

	for (int i = 0; i < len; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < len; i++) {
		base_pose_count = pos_count(arr[i]);

		while (1) {
			temp = mult * arr[i];

			if (pos_count(temp) > base_pose_count) {
				cout << "#" << i + 1 << " impossible" << '\n';
				break;
			}
			else{
				temp_str1 = to_string(arr[i]);
				sort(temp_str1.begin(), temp_str1.end());
				temp_str2 = to_string(temp);
				sort(temp_str2.begin(), temp_str2.end());

				if (temp_str1 == temp_str2) {
					cout << "#" << i + 1 << " possible" << '\n';
					break;
				}
			}
			mult++;
		}
		mult = 2;
	}

	return 0;
}