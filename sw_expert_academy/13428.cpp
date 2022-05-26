#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

bool min_compare(pair<char, int> p1, pair<char, int>p2) {
	if (p1.first < p2.first)
		return true;

	return false;
}

bool max_compare(pair<char, int> p1, pair<char, int>p2) {
	if (p1.first > p2.first)
		return true;

	return false;
}

int get_max(string str) {
	vector<pair<char, int>> vec;
	string temp_str;
	char temp_ch;
	int max = -1;

	for (int i = 0; i < str.size(); i++) {
		vec.push_back(make_pair(str[i], i));
	}

	stable_sort(vec.begin(), vec.end(), max_compare);

	/*for (auto i : vec) {
		cout << i.first << ' ' << i.second << endl;
	}*/

	for (int i = 0; i < str.size(); i++) {
		for (auto j : vec) {
			temp_str = str;
			temp_ch = temp_str[i];
			temp_str[i] = j.first;
			temp_str[j.second] = temp_ch;

			/*if (i == 0) {
				cout << (temp_str < str) << endl;
			}*/

			if (temp_str[0] != '0' && temp_str > str) {
				if (max == -1) {
					max = stoi(temp_str);
				}
				else if (max < stoi(temp_str)) {
					max = stoi(temp_str);
				}
				/*return stoi(temp_str);*/
			}
		}
	}

	if (max!= -1 && max > stoi(str)) {
		return max;
	}
	else
		return stoi(str);
}

int get_min(string str) {
	vector<pair<char, int>> vec;
	string temp_str;
	char temp_ch;
	int min = -1;

	for (int i = 0; i < str.size(); i++) {
		vec.push_back(make_pair(str[i], i));
	}

	stable_sort(vec.begin(), vec.end(), min_compare);

	/*for (auto i : vec) {
		cout << i.first << ' ' << i.second << endl;
	}*/

	for (int i = 0; i < str.size(); i++) {
		for (auto j : vec) {
			temp_str = str;
			temp_ch = temp_str[i];
			temp_str[i] = j.first;
			temp_str[j.second] = temp_ch;

			/*if (i == 0) {
				cout << (temp_str < str) << endl;
			}*/

			if (temp_str[0] != '0' && temp_str < str) {
				if (min == -1) {
					min = stoi(temp_str);
				}
				else if (min > stoi(temp_str)) {
					min = stoi(temp_str);
				}
				/*return stoi(temp_str);*/
			}
		}
	}

	if (min!= -1 && min < stoi(str)) {
		return min;
	}
	else
		return stoi(str);
}

int main() {
	int len;
	string num;

	cin >> len;

	for (int i = 0; i < len; i++) {
		cin >> num;
		cout << '#' << i + 1 << ' ' << get_min(num);
		cout << ' ' <<  get_max(num) << '\n';
	}
}