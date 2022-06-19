#include <iostream>

using namespace std;

int main() {
    int val;
    int sum = 0;
    cin >> val;

    for(int i = 1; i <= val; i++) {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}