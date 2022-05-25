#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

// Selection Sort - exceed of time error
//void pair_sort(vector<pair<int, int>> pair_vec, int len) {
//	pair<int, int> temp;
//	int j;
//
//	for (int i = 1; i < len; i++) {
//		temp = pair_vec[i];
//		j = i - 1;
//
//		for (j; j >= 0; j--) {
//			if (pair_vec[j].first > temp.first) {
//				pair_vec[j + 1] = pair_vec[j];
//			}
//			else if (pair_vec[j].first == temp.first) {
//				if (pair_vec[j].second > temp.second) {
//					pair_vec[j + 1] = pair_vec[j];
//				}
//				else {
//					break;
//				}
//			}
//			else {
//				break;
//			}
//		}
//		pair_vec[j+1] = temp;
//	}
//
//	for (int j = 0; j < len; j++) {
//		cout << pair_vec[j].first << ' ' << pair_vec[j].second << '\n';
//	}
//}

bool compare(pair<int, int>p1, pair<int, int>p2) {
	if (p1.first == p2.first) {
		return p1.second < p2.second;
	}

	return p1.first < p2.first;
}

int main() {
	int len;
	int temp_x, temp_y;
	vector<pair<int, int>> pair_vec;

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> len;

	for (int i = 0; i < len; i++) {
		cin >> temp_x >> temp_y;
		pair_vec.push_back(make_pair(temp_x, temp_y));
	}

	sort(pair_vec.begin(), pair_vec.end(), compare);

	for (int j = 0; j < len; j++) {
		cout << pair_vec[j].first << ' ' << pair_vec[j].second << '\n';
	}

	return 0;
}