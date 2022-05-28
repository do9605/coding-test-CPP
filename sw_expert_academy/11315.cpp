#include <iostream>
#include <vector>

using namespace std;

bool check_left(vector<vector <char>> arr, int n, int row, int col) {
	for (int i = 0; i < 5; i++) {
		//cout << "row : " << row + i << " col : " << col - i << " val : " << arr[row + i][col - i] << endl;
		if (row+i >= n || col-i < 0) {
			return false;
		}
		else if (arr[row + i][col - i] != 'o') {
			return false;
		}
	}
	
	return true;
}

bool check_right(vector<vector <char>> arr, int n, int row, int col) {
	for (int i = 0; i < 5; i++) {
		if (row + i >= n || col + i >= n ) {
			return false;
		}
		else if (arr[row + i][col + i] != 'o') {
			return false;
		}
	}

	return true;
}

bool check_under_line(vector<vector <char>> arr, int n, int row, int col) {
	for (int i = 0; i < 5; i++) {
		if (row + i >= n) {
			return false;
		}
		else if (arr[row + i][col] != 'o') {
			return false;
		}
	}

	return true;
}

bool check_horizontal_line(vector<vector <char>> arr, int n, int row, int col) {
	for (int i = 0; i < 5; i++) {
		if (col + i >= n) {
			return false;
		}
		else if (arr[row][col + i] != 'o') {
			return false;
		}
	}

	return true;
}

int main() {
	int len;
	int n;
	char temp_char;
	vector<vector <char>> arr;
	vector<char> temp_arr;
	bool check = false;

	cin >> len;

	for (int i = 0; i < len; i++) {
		cin >> n;

		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				cin >> temp_char;

				temp_arr.push_back(temp_char);
			}
			arr.push_back(temp_arr);
			temp_arr.clear();
		}

		/*for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				cout << arr[j][k];
			}
			cout << '\n';
		}*/

		for (int j = 0; j < n; j++) {
			int k = 0;

			for (k; k < n; k++) {
				/*cout << "check_left : " << check_left(arr, n, j, k) << '\n';*/

				if (arr[j][k] == 'o') {
					//cout << "correct o " << endl;
					//break;
					if (check_left(arr, n, j, k) || check_right(arr, n, j, k) || check_under_line(arr, n, j, k) || check_horizontal_line(arr, n, j, k)) {
						check = true;
						break;
					}
				}
			}

			if (k < n) {
				break;
			}
		}

		if (check)
			cout << '#' << i + 1 << " YES" << '\n';
		else
			cout << '#' << i + 1 << " NO" << '\n';

		check = false;
		arr.clear();
	}

	return 0;
}