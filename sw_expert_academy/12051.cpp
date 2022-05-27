#include <iostream>

using namespace std;

int main() {
	int len;
	int N, Pd, Pg;

	cin >> len;

	for (int i = 0; i < len; i++) {
		cin >> N >> Pd >> Pg;

		if (Pd != 100 && Pg == 100) {
			cout << '#' << i + 1 << ' ' << "Broken" << '\n';
 		}
		else if (Pd != 0 && Pg == 0) {
			cout << '#' << i + 1 << ' ' << "Broken" << '\n';
		}
		else {
			int j;
			for (j = 1; j <= N; j++) {
				if (float(Pd*j)/100 - Pd*j/100 == 0) {
					cout << '#' << i + 1 << ' ' << "Possible" << '\n';
					break;
				}
			}
			if (j > N) {
				cout << '#' << i + 1 << ' ' << "Broken" << '\n';
			}
			
		}
		
	}

	return 0;
}