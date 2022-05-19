#include <iostream>

using namespace std;

int main() {
    int count_test_case;
    int count_student = 0;
    int temp_num;
    int sum = 0;
    int avg = 0;
    int* arr;

    cin >> count_test_case;

    for(int i=0; i<count_test_case; i++){
        cin >> temp_num;

        arr = new int[temp_num];

        for(int j=0; j<temp_num; j++) {
            cin >> arr[j];
            sum += arr[j];
        }

        avg = sum / temp_num;

        for(int k=0; k<temp_num; k++) {
            if(arr[k] > avg)
                count_student += 1;
        }

        cout << fixed;
        cout.precision(3);
        cout << count_student / float(temp_num) * 100 << '%' << '\n';

        sum = 0;
        count_student = 0;
        delete[] arr;
    }

    return 0;
}