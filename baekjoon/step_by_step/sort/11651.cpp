#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2) {
	if (p1.second == p2.second) {
		return p1.first < p2.first;
	}
	return p1.second < p2.second;
}

int main() {
	int len;
	int temp_x, temp_y;
	pair<int, int> temp_pair;
	vector<pair<int, int>> pair_vec;

	cin >> len;

	for (int i = 0; i < len; i++) {
		cin >> temp_x >> temp_y;
		temp_pair.first = temp_x;
		temp_pair.second = temp_y;
		pair_vec.push_back(temp_pair);
	}

	sort(pair_vec.begin(), pair_vec.end(), compare);

	for (int j = 0; j < len; j++) {
		cout << pair_vec[j].first << ' ' << pair_vec[j].second << '\n';
	}

	return 0;
}