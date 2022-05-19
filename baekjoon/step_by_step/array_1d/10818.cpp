#include <iostream>

using namespace std;

int main(){
    int n;
    int min;
    int max;
    int* arr;

    cin >> n;

    arr = new int[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    min = arr[0];
    max = arr[0];

    for(int i = 1; i<n; i++){
        if (min > arr[i])
            min = arr[i];

        if (max < arr[i])
            max = arr[i];
    }

    delete[] arr;

    cout << min << " " << max << endl;

    return 0;
}