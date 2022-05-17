#include <iostream>

using namespace std;

int main() {
    int count;
    int standard;
    int* arr;

    cin >> count >> standard;

    arr = new int[count];

    for(int i=0; i<count; i++){
        cin >> arr[i];
    }

    for(int i=0; i<count; i++){
        if (arr[i] < standard)
            cout << arr[i] << ' ';
    }

    delete[] arr;

    return 0;
}