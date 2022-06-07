#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main(){
    int fruit_count;
    int direction, length;
    int big_square=1, small_square=1;
    vector<pair<int, int>> vec;
    int count_arr[5] = {0};

    cin >> fruit_count;

    for(int i=0; i<6; i++){
        cin >> direction >> length;
        vec.push_back(make_pair(direction, length));
        count_arr[direction]++;
    }

    for(int i=0; i<vec.size(); i++){
        if(count_arr[vec[i].first] == 1){
            big_square *= vec[i].second;
            continue;
        }

        if(vec[i%6].first == vec[(i+2)%6].first){
            small_square *= vec[(i+1)%6].second;
        }
    }
    cout << (big_square - small_square) * fruit_count;
    return 0;
}