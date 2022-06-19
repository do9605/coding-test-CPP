#include <iostream>

using namespace std;

int main(){
    int count;
    int a, b;
    int idx = 1;

    cin >> count;

    while(count--){
        cin >> a >> b;
        cout << "Case #" << idx << ": " << a << " + " << b << " = " << a+b << '\n';
        idx++;
    }
    return 0;
}