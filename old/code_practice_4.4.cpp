#include <iostream>
using namespace std;

int main(void) {
	int kakao_2017;
	int kakao_2018;
	int count;
	int money = 0;

	cin >> count;

	for (int i = 0; i < count; i++) {
		cin >> kakao_2017 >> kakao_2018;

		if (kakao_2017 == 1)
			money += 5000000;
		else if (kakao_2017 >= 2 && kakao_2017 <= 3)
			money += 3000000;
		else if (kakao_2017 >= 4 && kakao_2017 <= 6)
			money += 2000000;
		else if (kakao_2017 >= 7 && kakao_2017 <= 10)
			money += 500000;
		else if (kakao_2017 >= 11 && kakao_2017 <= 15)
			money += 300000;
		else if (kakao_2017 >= 16 && kakao_2017 <= 21)
			money += 100000;

		if (kakao_2018 == 1)
			money += 5120000;
		else if (kakao_2018 >= 2 && kakao_2018 <= 3)
			money += 2560000;
		else if (kakao_2018 >= 4 && kakao_2018 <= 7)
			money += 1280000;
		else if (kakao_2018 >= 8 && kakao_2018 <= 15)
			money += 640000;
		else if (kakao_2018 >= 16 && kakao_2018 <= 31)
			money += 320000;

		cout << money << endl;
		money = 0;
	}
}