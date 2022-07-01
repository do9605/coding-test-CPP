#include <iostream>

using namespace std;

int live(int floor, int n){
    int sum = 0;

    if(floor == 0)
        return n;
    else{
        for(int i=1; i<=n; i++){
            sum += live(floor-1, i);
        }

        return sum;
    }

}

int main(){
    int t, k, n;

    cin >> t;

    while(t--){
        cin >> k >> n;

        cout << live(k, n) << '\n';
    }

    return 0;
}