#include <iostream>
#include <string>

using namespace std;

int main() {
	string week[] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
	int len;
	string input;
	int count;
	int idx;

	cin >> len;

	for (int i = 0; i < len; i++) {
		cin >> input;
		count = 0;

		for (int j = 0; j < 7; j++) {
			if (input == week[j]) {
				idx = j;
			}
		}

		while (1) {
			count++;
			if (week[++idx % 7] == "SUN") {
				break;
			}
		}

		cout << "#" << i + 1 << " " << count << '\n';
	}

	return 0;
}