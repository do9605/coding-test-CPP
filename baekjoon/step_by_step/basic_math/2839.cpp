#include <iostream>

using namespace std;

int main(){
    int n;
    int five_quotient;

    cin >> n;

    five_quotient = n / 5;

    while(five_quotient){        
        if((n - five_quotient*5) % 3 == 0){
            cout << five_quotient + (n - five_quotient*5) / 3;
            return 0;
        }
        five_quotient--;
    }

    if(n % 3 == 0)
        cout << n / 3;
    else
        cout << -1;

    return 0;
}