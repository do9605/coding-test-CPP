#include <iostream>

using namespace std;

int main()
{
    short a, b, c;

    cin >> a >> b >> c;

    if (a == b && b == c)
        cout << 10000 + a*1000;
    else if (a != b && a != c && b != c)
        cout << 100*(a > b ? (a > c ? a : c) : (b > c ? b : c));
    else
        cout << 1000 + 100*(a == b ? a : (b == c ? b : c));

    return 0;
}