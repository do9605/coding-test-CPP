#include <iostream>

using namespace std;

bool exist(int* arr, int len, int target){
    for(int i=0; i<len; i++){
        if (target == arr[i])
            return true;
    }
    return false;
}

int dn(int start){
    int a = start/1000;
    int b = (start/100)%10;
    int c = (start/10)%10;
    int d = start%10;

    return start + a + b + c + d;
}

void self_num(int range=10000){
    int is_selfnum[range];
    int idx_is = 0;
    int not_selfnum[range];
    int idx_not = 0;

    for(int j=1; j<range; j++){  
        for(int i=j; i<range; i=dn(i)){
            // cout << "i is : " << i << endl;
            // cout << dn(i) << ' ';
            if((i == j) && (!exist(not_selfnum, idx_not, i))){
                // cout << "i cout : " << i << endl;
                is_selfnum[idx_is] = i;
                idx_is += 1;
            }
            else if (!exist(not_selfnum, idx_not, i)){
                not_selfnum[idx_not] = i;
                // cout << "idx_not : " << idx_not << endl;
                idx_not += 1; 
            }
            else{
                break;
            }

            // if(j == 42){
            //     cout << "42 exist in not_selfnum : " << exist(not_selfnum, idx_not, 42) << endl;
            //     break;
            // }
        }
    }

    for(int k=0; k<idx_is; k++){
        cout << is_selfnum[k] << '\n';
    }
    // cout << "=====" << endl;

    // for(int k=0; k<=idx_not; k++){
    //     cout << not_selfnum[k] << endl;
    // }

    // cout << idx_is << " " << idx_not << endl;
}

int main() {
    self_num();
    // cout << dn(100) << endl;
    return 0;
}