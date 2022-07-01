#include <iostream>

using namespace std;

int main(){
    int t, h, w, n;
    cin >> t;

    while(t--){
        cin >> h >> w >> n;

        int col = n / h;
        int row = n % h;

        if(row == 0){
            row = h;
            col--;
        }

        if(col+1 < 10)
            cout << row << 0 << col+1 << '\n';
        else
            cout << row << col+1 << '\n';
    }

    return 0;
}