#include <iostream>
#include <string>

using namespace std;

int main(){
    string arr[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    string input;
    string temp_input;
    string::size_type n;
    int i = 0;

    cin >> input;

    temp_input = input;

    while(i != 8){
        n = temp_input.find(arr[i]);

        if(n != string::npos){
            temp_input.replace(n, arr[i].size(), "*");
            // cout << temp_input << endl;
            // cout << "temp is : " << temp_input << '\n';
            i = 0;
        }
        else{
            i++;
        }
    }

    cout << temp_input.length() << '\n';
    return 0;
}