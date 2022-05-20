#include <iostream>

using namespace std;

int main()
{
	int num;

	cin >> num;

	for (int i = 2; i <= num;) {
		if (num % i == 0) {
			cout << i << '\n';
			num /= i;
		}
		else {
			i++;
		}
	}
	return 0;
}