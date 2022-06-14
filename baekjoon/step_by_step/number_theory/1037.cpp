#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int count;
    int temp;
    vector<int> divisor;

    cin >> count;

    for(int i=0; i<count; i++){
        cin >> temp;
        divisor.push_back(temp);
    }

    sort(divisor.begin(), divisor.end());

    cout << divisor[0] * divisor[divisor.size()-1];
    return 0;
}