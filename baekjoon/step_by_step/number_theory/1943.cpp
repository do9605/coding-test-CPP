#include <iostream>

using namespace std;

int gcd(int a, int b){
    if(!b)
        return a;
    else
        return gcd(b, a%b);
}

int main(){
    int t, a, b;
    int gcd_val;

    cin >> t;

    while(t--){
        cin >> a >> b;
        
        gcd_val = gcd(a, b);

        cout << gcd_val * (a/gcd_val) * (b/gcd_val) << '\n';
    }

    return 0;
}