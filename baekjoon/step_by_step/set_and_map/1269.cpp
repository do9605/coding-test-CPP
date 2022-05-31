#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int a_len, b_len;
    int temp;
    int count = 0;
    vector<int> a, b;

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a_len >> b_len;

    for(int i=0; i<a_len; i++){
        cin >> temp;
        a.push_back(temp);
    }

    sort(a.begin(), a.end());

    for(int i=0; i<b_len; i++){
        cin >> temp;
        b.push_back(temp);
    }

    sort(b.begin(), b.end());

    for(auto data : a){
        if(!binary_search(b.begin(), b.end(), data)){
            count++;
        }
    }

    for(auto data : b){
        if(!binary_search(a.begin(), a.end(), data)){
            count++;
        }
    }

    cout << count << '\n';

    return 0;
}