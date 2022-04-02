#include <iostream>

using namespace std;

int main()
{
    short a, b, c;

    cin >> a >> b >> c;

    a = a + (b+c) / 60;
    a = a >= 24 ? a-24 : a;
    b = (b + c) - ((b + c) / 60)*60;
    
    cout << a << ' ' << b;
    return 0;
}