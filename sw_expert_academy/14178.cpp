#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int water(int end, int range) {
	int temp = 2 * range + 1;
	int count = 1;

	while (temp < end) {
		temp += 2 * range + 1;
		count++;
	}

	return count;
}

int main() {
	int len;
	int n, d;
	vector<pair<int, int>> vec;

	cin >> len;

	for (int i = 0; i < len; i++) {
		cin >> n >> d;
		vec.push_back(make_pair(n, d));
	}

	for (int i = 0; i < len; i++) {
		cout << "#" << i + 1 << " " << water(vec[i].first, vec[i].second) << '\n';
	}

	return 0;
}