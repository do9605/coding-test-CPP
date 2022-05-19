#include <iostream>

using namespace std;

int main() {
    int idx;
    int max;
    int arr[9];

    for(int i=0; i<9; i++){
        cin >> arr[i];
    }

    max = arr[0];

    for(int i=1; i<9; i++){
        if (max < arr[i]) {
            max = arr[i];
            idx = i;
        }
    }

    cout << max << endl << idx << endl;
    return 0;
}