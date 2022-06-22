#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    int count = 1;

    cin >> a >> b >> c;

    if(b >= c)
        cout << -1;
    else{
        cout << a / (c-b) +1;
    }

    return 0;
}