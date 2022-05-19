#include <iostream>

using namespace std;

int main(){
    int total = 1;
    int num[3];
    int count[10] = {0,};
    int a, b, c;

    for(int i=0; i<3; i++){
        cin >> num[i];
        total *= num[i];
    }

    while(total != 0){
        count[total%10] += 1;
        total /= 10;
    }

    for(int k=0; k<10; k++)
        cout << count[k] << '\n';
    
    return 0;
}