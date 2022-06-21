#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    int test_case;
    int iter;

    cin >> test_case;

    while(test_case--){
        cin >> iter >> s;

        for(auto ch : s){
            for(int i=0; i<iter; i++)
                cout << ch;
        }
        cout << '\n';
    }

    return 0;
}