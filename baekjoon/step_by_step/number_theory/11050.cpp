#include <iostream>

using namespace std;

int factorial(int a, int b){
    if(!b)
        return 1;
    else
        return a * factorial(a-1, b-1);
}

int main(){
    int a, b;

    cin >> a >> b;

    cout << factorial(a, b) / factorial(b, b);
    return 0;
}