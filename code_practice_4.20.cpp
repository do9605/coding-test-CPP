#include <iostream>
using namespace std;

class card {
public:
	int attack;
	int vitality;
};

int main() {
	card A, B;
	cin >> A.attack >> A.vitality >> B.attack >> B.vitality;

	while (1) {
		A.vitality -= B.attack;
		B.vitality -= A.attack;

		if (A.vitality <= 0 && B.vitality <= 0) {
			cout << "DRAW";
			return 0;
		}
		else if (B.vitality <= 0) {
			cout << "PLAYER A";
			return 0;
		}
		else if (A.vitality <= 0) {
			cout << "PLAYER B";
			return 0;
		}
	}
}