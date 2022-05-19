#include <iostream>
#include <string>

using namespace std;

int get_len(char* ch){
    for(int j=0; j<80; j++){
        if (ch[j] == '\0')
            return j+1;
    }

    return 0;
}

int main(){
    int count;
    int len;
    int add = 0;
    int sum = 0;
    char ch[80];

    cin >> count;

    for(int i=0; i<count; i++) {
        cin >> ch;

        len = get_len(ch);

        if(len == 0)
            cout << "Error!" << '\n';

        for(int j=0; j<len; j++){
            if (ch[j] == 'O'){
                sum += (1+add);
                add += 1;
            }
            else{
                add = 0;
            }
        }
        cout << sum << '\n';
        add = 0;
        sum = 0;
    }

    return 0;
}