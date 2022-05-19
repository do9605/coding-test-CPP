#include <iostream>

using namespace std;

int main(){
    int input;
    int count = 0;
    int arr[42] = {0,};

    for(int i=0; i<10; i++){
        cin >> input;
        arr[input%42] += 1;
    }

    for(int j=0; j<42; j++){
        if (arr[j] != 0)
            count += 1;
    }
    cout << count << '\n';
    return 0;
}