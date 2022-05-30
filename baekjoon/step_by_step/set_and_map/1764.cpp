#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int listen_num;
	int see_num;
	string temp;
	vector<string> listen;
	vector<string> result;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> listen_num >> see_num;

	for (int i = 0; i < listen_num; i++) {
		cin >> temp;
		listen.push_back(temp);
	}

	sort(listen.begin(), listen.end());

	for (int i = 0; i < see_num; i++) {
		cin >> temp;

		if(binary_search(listen.begin(), listen.end(), temp)){
			result.push_back(temp);
		}
	}

	sort(result.begin(), result.end());

	cout << result.size() << '\n';

	for (auto data : result) {
		cout << data << '\n';
	}

	return 0;
}