#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    int sum = 0;
    string str;

    cin >> n >> str;

    for(int i=0; i<n; i++)
        sum += str[i]-'0';

    cout << sum << '\n';
    return 0;
}
