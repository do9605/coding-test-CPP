#include <iostream>

using namespace std;

int divsum(int num) {
	int val;
	int sum;
	int divsum = 0;

	for (int i = num-1; i > 1; i--) {
		val = i;
		sum = val;

		while (val != 0) {
			sum += val % 10;
			val /= 10;
		}

		if (sum == num) {
			if (divsum == 0 || divsum > i) {
				divsum = i;
			}
		}
	}

	return divsum;
}

int main()
{
	int num;
	cin >> num;

	cout << divsum(num) << '\n';

	return 0;
}