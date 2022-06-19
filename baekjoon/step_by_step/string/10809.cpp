#include <iostream>
#include <string>

using namespace std;

int alphabet_index(char ch){
    switch(ch){
        case 'a':
            return 0;
        case 'b':
            return 1;
        case 'c':
            return 2;
        case 'd':
            return 3;
        case 'e':
            return 4;
        case 'f':
            return 5;
        case 'g':
            return 6;
        case 'h':
            return 7;
        case 'i':
            return 8;
        case 'j':
            return 9;
        case 'k':
            return 10;
        case 'l':
            return 11;
        case 'm':
            return 12;
        case 'n':
            return 13;
        case 'o':
            return 14;
        case 'p':
            return 15;
        case 'q':
            return 16;
        case 'r':
            return 17;
        case 's':
            return 18;
        case 't':
            return 19;
        case 'u':
            return 20;
        case 'v':
            return 21;
        case 'w':
            return 22;
        case 'x':
            return 23;
        case 'y':
            return 24;
        case 'z':
            return 25;
    }
}

int main(){
    int arr[26];
    int idx;
    string s;

    cin >> s;

    for(auto &i:arr)
        i = -1;

    for(int i = 0; i<s.length(); i++){
        idx = alphabet_index(s[i]);

        if(arr[idx] == -1)
            arr[idx] = i;
    }

    for(auto i : arr)
        cout << i << ' ';

    return 0;
}