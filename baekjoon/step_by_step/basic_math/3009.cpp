#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main() {
    vector<pair<int, int>> point;
    int x_arr[1001] = {0};
    int y_arr[1001] = {0};
    int x, y;
    int target_x, target_y;

    for(int i=0; i<3; i++){
        cin >> x >> y;
        point.push_back(make_pair(x, y));
        x_arr[x]++;
        y_arr[y]++;
    }

    for(auto pos : point){
        if(x_arr[pos.first] == 1)
            target_x = pos.first;
        
        if(y_arr[pos.second] == 1)
            target_y = pos.second;
    }

    cout << target_x << ' ' << target_y;
    return 0;
}