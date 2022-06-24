#include <iostream>
#include <utility>

using namespace std;

int main(){
    int x;
    int count = 1;
    int idx = 1;

    cin >> x;

    while(true){
        int left, right;

        if(count % 2 == 0){
            left = 1;
            right = count;
        }
        else{
            left = count;
            right = 1;
        }
        for(int i=1; i<=count; i++, idx++){
            if(idx == x){
                cout << left << '/' << right;
                return 0;
            }
            else{
                if(count % 2 == 0){
                    left++;
                    right--;
                }
                else{
                    left--;
                    right++;
                }
            }
        }

        count++;
    }

    return 0;
}