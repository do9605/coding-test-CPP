#include <iostream>

using namespace std;

char wb[8][8];
char bw[8][8];
char** arr;

int wb_count(int x, int y) {
	int count = 0;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (arr[x + i][y + j] != wb[i][j]) {
				count++;
			}
		}
	}

	return count;
}

int bw_count(int x, int y) {
	int count = 0;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (arr[x + i][y + j] != bw[i][j]) {
				count++;
			}
		}
	}

	return count;
}

int main() {	
	int row, col;
	int count_wb, count_bw;
	int min;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((i + j) % 2 == 0) {
				wb[i][j] = 'W';
			}
			else
				wb[i][j] = 'B';
		}
	}

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((i + j) % 2 == 0) {
				bw[i][j] = 'B';
			}
			else
				bw[i][j] = 'W';
		}
	}

	cin >> row >> col;

	arr = new char*[row];

	for (int i = 0; i < row; i++) {	
		arr[i] = new char[col];
		
		for (int j = 0; j < col; j++) {
			cin >> arr[i][j];
		}
	}

	/*for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << arr[i][j];
		}
		cout << '\n';
	}*/

	for (int i = 0; i + 7 < row; i++) {
		for (int j = 0; j + 7 < col; j++) {
			count_wb = wb_count(i, j);
			count_bw = bw_count(i, j);

			if (i == 0 && j == 0) {
				min = (count_wb > count_bw ? count_bw : count_wb);
			}
			else {
				int temp_min = (count_wb > count_bw ? count_bw : count_wb);

				if (temp_min < min)
					min = temp_min;
			}
		}
	}

	cout << min << '\n';

	for (int i = 0; i < row; i++) {
		delete[] arr[i];
	}
	delete[] arr;

	return 0;
}