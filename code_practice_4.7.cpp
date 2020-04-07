#include <iostream>
using namespace std;

int main(void) {
	int N;
	int i = 2;
	cin >> N;

	while (1) {
		if (i * i > N)
			break;
		i++;
	}

	cout << --i << endl;
	return 0;
}