#include <iostream>
using namespace std;

int main() {
	int arr1[4], arr2[4];
	int sum1, sum2;

	for (int i = 0; i < 4; i++)
		cin >> arr1[i];

	for (int i = 0; i < 4; i++)
		cin >> arr2[i];

	sum1 = (arr1[0] + arr1[2]) - (arr2[0] + arr2[2]);
	sum2 = (arr1[1] + arr1[3]) - (arr2[1] + arr2[3]);

	if (sum1 == -sum2)
		cout << "Tie";
	else if (sum1 + sum2 > 0)
		cout << "Gunnar";
	else
		cout << "Emma";

	return 0;
}