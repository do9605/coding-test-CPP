#include <iostream>

using namespace std;

int get_max(int* arr, int len){
    int max = arr[0];

    for(int i=1; i<len; i++){
        if (max < arr[i])
            max = arr[i];
    }

    return max;
}

int main(){
    int count_subj;
    int *arr;
    int max;
    int sum = 0;

    cin >> count_subj;

    arr = new int[count_subj];

    for(int i=0; i<count_subj; i++)
        cin >> arr[i];
    
    max = get_max(arr, count_subj);

    for(int i=0; i<count_subj; i++)
        sum += arr[i];

    delete[] arr;

    cout << (float(sum) / max * 100) / count_subj << '\n';
    return 0;
}