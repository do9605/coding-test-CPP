#include <iostream>
#include <string>

using namespace std;

int dial_time(char ch){
    switch(ch){
        case 'A':
        case 'B':
        case 'C':
            return 3;
            break;
        case 'D':
        case 'E':
        case 'F':
            return 4;
            break;
        case 'G':
        case 'H':
        case 'I':
            return 5;
            break;
        case 'J':
        case 'K':
        case 'L':
            return 6;
            break;
        case 'M':
        case 'N':
        case 'O':
            return 7;
            break;
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            return 8;
            break;
        case 'T':
        case 'U':
        case 'V':
            return 9;
            break;
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            return 10;
            break;
    }
}

int main(){
    string str;
    int count = 0;

    cin >> str;

    for(auto ch : str){
        count += dial_time(ch);
    }

    cout << count;
    return 0;
}