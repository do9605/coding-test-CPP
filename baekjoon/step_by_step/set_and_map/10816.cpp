#include <iostream>
#include <vector>

#define OFFSET 10000000

int arr[20000001] = { 0, };

using namespace std;


int main() {
	int n, m;
	int temp;
	vector<int> result_vec;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> temp;

		arr[temp + OFFSET]++;
	}

	cin >> m;

	for (int i = 0; i < m; i++) {
		cin >> temp;
		
		result_vec.push_back(arr[temp + OFFSET]);
	}

	for (int i = 0; i < m; i++) {
		cout << result_vec[i] << ' ';
	}

	return 0;
}