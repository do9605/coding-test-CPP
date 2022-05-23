#include <iostream>

using namespace std;

int arr[1000001];
int* new_arr;

void sort(int first, int end){
    int mid = (first+end)/2;
    int i = first;
    int j = mid+1;
    int k = first;

    while(i <= mid && j<= end)
        new_arr[k++] = (arr[i] < arr[j]) ? arr[i++] : arr[j++];

    if(i > mid){
        for(j; j<=end; j++)
            new_arr[k++] = arr[j];
    }
    else{
        for(i; i<=mid; i++)
            new_arr[k++] = arr[i];
    }

    for(int i=first; i<=end; i++)
        arr[i] = new_arr[i];
}

void partition(int first, int end){
    int mid = (first+end)/2;

    if(first < end){
        partition(first, mid);
        partition(mid+1, end);
        sort(first, end);
    }
}

int main(){
    int num;

    cin >> num;

    new_arr = new int[num];

    for(int i=0; i<num; i++){
        cin >> arr[i];
    }

    partition(0, num-1);

    for(int i=0; i<num; i++){
        cout << arr[i] << '\n';
    }

    delete[] new_arr;
    return 0;
}