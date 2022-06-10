#include <iostream>
#include <cmath>

using namespace std;
using std::acos;

int main(){
    double r;
    const double pi = acos(-1);

    cin >> r;

    cout << fixed;
    cout.precision(6);

    cout << pi*r*r << '\n';
    cout << 2*r*r << '\n';

    return 0;
}