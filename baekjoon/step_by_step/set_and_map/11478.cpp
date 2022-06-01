#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
    string s;
    string temp;
    set<string> str_set;

    cin >> s;

    for(int i=0; i<s.size(); i++){
        temp = "";

        for(int j=i; j<s.size(); j++){
            temp += s[j];
            str_set.insert(temp);
        }
    }

    cout << str_set.size() << '\n';
}