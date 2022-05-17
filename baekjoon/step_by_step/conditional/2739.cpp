#include <iostream>

using namespace std;

int main() {
    short val;
    cin >> val;

    for (int i = 1; i<10; i++){
        cout << val << " * " << i << " = " << val*i << endl;
    }
    return 0;
}