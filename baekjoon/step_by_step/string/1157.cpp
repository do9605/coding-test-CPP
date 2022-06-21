#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

bool compare(pair<char, int> a, pair<char, int> b){
    if(a.second > b.second)
        return true;
    else
        return false;
}

int main(){
    string word;
    vector<pair<char, int>> vec;
    int count[100] = {0,};

    cin >> word;

    for(auto &ch : word){
        if('a' <= ch && ch <= 'z')
            ch -= 32;

        count[int(ch)]++;
    }

    for(int i=65; i<=90; i++){
        if(count[i] != 0){
            vec.push_back(make_pair(char(i), count[i]));
        }
    }

    sort(vec.begin(), vec.end(), compare);

    if(vec.size() != 1 && vec[0].second == vec[1].second)
        cout << '?';
    else
        cout << vec[0].first;

    return 0;
}