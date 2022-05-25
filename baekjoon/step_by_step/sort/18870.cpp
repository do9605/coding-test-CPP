#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
	int len;
	int *input;
	vector<int> arr;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> len;

	input = new int[len];

	for (int i = 0; i < len; i++) {
		cin >> input[i];
		arr.push_back(input[i]);
	}

	sort(arr.begin(), arr.end());

	/*for (int i = arr.size() - 1; i >= 1; i--) {
		if (arr[i] == arr[i - 1]) {
			arr.erase(arr.begin() + i);
		}
	}*/

	arr.erase(unique(arr.begin(), arr.end()), arr.end());

	/*for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;*/


	for (int i = 0; i < len; i++) {
		cout << lower_bound(arr.begin(), arr.end(), input[i]) - arr.begin() << " ";
	}
	
	return 0;
}