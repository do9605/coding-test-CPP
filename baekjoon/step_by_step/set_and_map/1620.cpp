#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool is_digit(string str){
    for(auto ch : str){
        if(!isdigit(ch)){
            // cout << "__ ch __" << '\n';
            // cout << ch << '\n';
            return false;
        }
    }
    return true;
}

int main(){
    int n, m;
    string temp_str;
    map<string, int> map_int;
    map<int, string> map_str;

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for(int i=0; i<n; i++){
        cin >> temp_str;
        map_int.insert(make_pair(temp_str, i+1));
        map_str.insert(make_pair(i+1, temp_str));
    }


    for(int i=0; i < m; i++){
        cin >> temp_str;

        if(is_digit(temp_str)){
            cout << map_str[stoi(temp_str)] << '\n';
        }
        else{
            cout << map_int[temp_str] << '\n';
        }
    }
    return 0;
}