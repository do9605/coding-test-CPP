#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, string> p1, pair<int, string> p2) {
	return p1.first < p2.first;
}

int main() {
	int len;
	int temp;
	string str;
	vector<pair<int, string>> reg_vec;

	cin >> len;

	for (int i = 0; i < len; i++) {
		cin >> temp >> str;
		reg_vec.push_back(make_pair(temp, str));
	}

	stable_sort(reg_vec.begin(), reg_vec.end(), compare);

	for (int i = 0; i < len; i++) {
		cout << reg_vec[i].first << ' ' << reg_vec[i].second << '\n';
	}

	return 0;
}