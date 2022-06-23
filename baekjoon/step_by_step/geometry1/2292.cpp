#include <iostream>

using namespace std;

int main(){
    int n;
    int i = 1;
    int j;
    int count = 1;
    cin >> n;

    while(true){
        if(i == 1)
            j = i + 6*(count-1);
        else
            j = i-1 + 6*(count-1);

        for(i; i<=j; i++){
            if(i == n){
                cout << count;
                return 0;
            }
        }
        count++;
    }

    return 0;
}