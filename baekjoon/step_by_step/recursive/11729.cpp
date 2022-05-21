#include <iostream>

using namespace std;

void hanoi(int num, int from, int to, int other) {
	if (num != 0) {
		hanoi(num - 1, from, other, to);
		cout << from << ' ' << to << '\n';
		hanoi(num - 1, other, to, from);
	}
}

int main()
{
	int num;
	cin >> num;

	cout << (1 << num) - 1 << '\n';
	hanoi(num, 1, 3, 2);

	return 0;
}