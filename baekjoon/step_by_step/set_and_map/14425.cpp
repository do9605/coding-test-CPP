#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(vector<string> vec, string target) {
	int start = 0;
	int end = vec.size()-1;
	int m;

	while (start <= end) {
		m = (start + end) / 2;

		if (target == vec[m])
			return 1;
		else if (target > vec[m])
			start = m + 1;
		else
			end = m - 1;
;	}

	return 0;
}

int main() {
	string temp;
	vector<string> n;
	vector<string> m;
	int n_len, m_len;
	int count = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n_len >> m_len;

	for (int i = 0; i < n_len; i++) {
		cin >> temp;
		n.push_back(temp);
	}

	sort(n.begin(), n.end());

	for (int i = 0; i < m_len; i++) {
		cin >> temp;

		if (binary_search(n.begin(), n.end(), temp))
			count++;
		//count += binarySearch(n, temp);
	}

	cout << count;

	return 0;
}