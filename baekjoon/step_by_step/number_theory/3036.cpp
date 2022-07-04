#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b){
    if(!b)
        return a;
    else
        return gcd(b, a%b);
}

int main(){
    int n, temp, gcd_val;
    vector<int> circle;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> temp;
        circle.push_back(temp);
    }

    for(int i=1; i<n; i++){
        gcd_val = gcd(circle[0], circle[i]);

        cout << circle[0] / gcd_val << '/' << circle[i] / gcd_val << '\n';
    }
    return 0;
}