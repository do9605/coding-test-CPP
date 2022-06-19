#include <iostream>

using namespace std;


int main() {
    int count;
    int num1, num2;

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> count;

    for(int i=0; i<count; i++) {
        cin >> num1 >> num2;
        cout << num1+num2 << '\n';
    }
    return 0;
}