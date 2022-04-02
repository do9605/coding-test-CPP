#include <iostream>
#include <math.h>
using namespace std;

int coin_count(double price, double coin_array[]) {
	int total_count_coin = 0;
	int i = 0;

	while (price != 0) {
		while (coin_array[i] > price) {
			//cout << coin_array[i];
			i++;
		}

		price = price - coin_array[i];
		i--;
		total_count_coin++;
	}

	return total_count_coin;
}

int main() {
	int count;
	double price;
	cin >> count;

	double coin_10[15];
	double coin_25[7];
	double coin_array[22];
	int total_count_coin = 0;
	int coin_25_len = 7;
	int coin_15_len = 15;

	for (int i = 0; i < 15; i++)
		coin_10[i] = pow(10, i);

	for (int j = 0; j < 7; j++) {
		coin_25[j] = 25 * pow(100, j);
	}

	for (int i = coin_15_len - 1; i >= 0; i--) {
		for (int j = coin_25_len - 1; j >= 0; j--) {
			if (coin_10[i] < coin_25[j]) {
				coin_array[total_count_coin] = coin_25[j];
				coin_25_len--;
				total_count_coin++;
			}
			else {
				coin_array[total_count_coin] = coin_10[i];
				total_count_coin++;
				break;
			}
		}

		if (coin_25_len == 0) {
			coin_array[total_count_coin] = coin_10[i];
			total_count_coin++;
		}
	}

	while (count != 0) {
		cin >> price;
		cout << coin_count(price, coin_array) << endl;
		count--;
	}
}