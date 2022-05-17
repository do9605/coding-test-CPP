#include <iostream>

using namespace std;

int main() {
    short val;
    short input1, input2;
    cin >> val;

    for (int i = 0; i < val; i++) {
        cin >> input1 >> input2;
        cout << input1 + input2 << endl;
    }
    return 0;
}

// int main() {
//     short val;
//     short* val_ptr;
//     short* val_ptr_array[9];
//     short idx;

//     cin >> val;
//     idx = val;

//     while (val > 0) {
//         val_ptr = new short[2];

//         cin >> val_ptr[0] >> val_ptr[1];
//         // cout << "====" << endl;
//         // cout << idx-val << endl;
//         // cout << "====" << endl;
//         val_ptr_array[idx-val] = val_ptr;
//         val -= 1;
//     }

//     while (val != idx) {
//         cout << "====" << endl;
//         cout << val << endl;
//         cout << "====" << endl;
//         cout << val_ptr_array[val][0] + val_ptr_array[val][1] << endl;
//         delete[] val_ptr_array[val];
//         val += 1;
//     }
//     return 0;
// }