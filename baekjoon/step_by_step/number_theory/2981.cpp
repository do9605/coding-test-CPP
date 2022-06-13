#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b){
    if(a % b == 0)
        return b;
    else
        return gcd(b, a%b);
}

int main(){
    int len;
    int temp;
    int val;
    vector<int> num;
    vector<int> result;

    cin >> len;

    for(int i=0; i<len; i++){
        cin >> temp;
        num.push_back(temp);
    }

    sort(num.begin(), num.end());

    val = num[1] - num[0];

    for(int i=2; i<num.size(); i++){
        val = gcd(val, num[i]-num[i-1]);
    }

    for(int j=2; j*j<=val; j++){
        if(val % j == 0){
            result.push_back(j);
            
            if(val/j != j)
                result.push_back(val/j);
        }
    }
    result.push_back(val);

    sort(result.begin(), result.end());

    for(auto ele : result){
        cout << ele << ' ';
    }

    return 0;
}