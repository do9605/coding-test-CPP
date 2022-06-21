#include <iostream>
#include <string>

using namespace std;

int main(){
    string a, b;
    string a_reverse = "", b_reverse = "";

    cin >> a >> b;

    for(int i=a.length()-1; i>=0; i--)
        a_reverse += a[i];
    
    for(int i=b.length()-1; i>=0; i--)
        b_reverse += b[i];

    // cout << a_reverse << ' ' << b_reverse << endl;

    if(a_reverse > b_reverse)
        cout << a_reverse;
    else
        cout << b_reverse;

    return 0;
}