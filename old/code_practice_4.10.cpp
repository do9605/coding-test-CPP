#include <iostream>
using namespace std;

int strlen(char* var) {
	int count = 0;
	for (int i = 0; i < 500; i++) {
		if (var[i] == '\0')
			return count;
		else
			count++;
	}
}

int main(void) {
	char var[500];
	int count = 0;

	cin >> var;

	for (int i = 0; i < strlen(var); i++) {
		if (var[i] == 'X')
			count++;

		if (count == 4) {
			for (int k = i; k >= i - 3; k--) {
				var[k] = 'A';
			}
			count = 0;
		}
		else if (count == 2 && var[i] == '.') {
			var[i - 1] = 'B';
			var[i - 2] = 'B';
			count = 0;
		}
		else if (count == 2 && i == strlen(var) - 1) {
			var[strlen(var) - 1] = 'B';
			var[strlen(var) - 2] = 'B';
			count = 0;
		}
		else if ((count % 2 == 1 && var[i] == '.') || (count % 2 == 1 && i == strlen(var)-1)) {
			cout << -1;
			return 0;
		}
		
	}
	cout << var;
	return 0;
}