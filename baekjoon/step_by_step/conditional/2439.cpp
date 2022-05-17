#include <iostream>

using namespace std;


int main() {
    int num;
    int i = 0;

    cin >> num;

    for(i; i<num; i++){
        for(int j=num-1-i; j>0; j--)
            cout << ' ';
        for(int k=0; k < i+1; k++)
            cout << '*';
        cout << '\n';
    }
    return 0;
}