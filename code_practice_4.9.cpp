#include <iostream>
using namespace std;

int main(void) {
	int A[100], B[100], C[100];
	fill_n(A, 100, 1);
	fill_n(B, 100, 1);
	fill_n(C, 100, 1);

	int price_A, price_B, price_C;
	int start, last;
	int start_among = 100, last_among = 0;
	int sum = 0;

	cin >> price_A >> price_B >> price_C;

	for (int i = 0; i < 3; i++) {
		cin >> start >> last;

		start_among = (start > start_among) ? start_among : start;
		last_among = (last > last_among) ? last : last_among;

		if (i == 0) {
			for (int j = start+1; j <= last; j++) 
				A[j] = 2;
		}
		else if(i == 1) {
			for (int j = start+1; j <= last; j++)
				B[j] = 2;
		}
		else {
			for (int j = start+1; j <= last; j++)
				C[j] = 2;
		}
	}

	for (int k = start_among+1; k <= last_among; k++) {
		if (A[k] * B[k] * C[k] == 1)
			continue;
		else if (A[k] * B[k] * C[k] == 2)
			sum += price_A;
		else if (A[k] * B[k] * C[k] == 4)
			sum += price_B * 2;
		else if (A[k] * B[k] * C[k] == 8)
			sum += price_C * 3;
	}

	cout << sum;
	return 0;
}