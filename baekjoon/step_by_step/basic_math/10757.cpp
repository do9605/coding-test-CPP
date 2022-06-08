#include <iostream>
#include <string>

using namespace std;

int main() {
    string num1, num2;
    string result = "";
    int upper = 0;

    cin >> num1 >> num2;

    while(!num1.empty() && !num2.empty()){
        int temp = int(num1[num1.length()-1]-'0') + int(num2[num2.length()-1]-'0') + upper;

        if(temp >= 10){
            upper = 1;
            temp -= 10;
        }
        else{
            upper = 0;
        }

        result = to_string(temp) + result;
        num1.pop_back();
        num2.pop_back();
    }

    if(num1.empty()){
        for(int i=num2.length()-1; i>=0; i--){
            int temp = int(num2[num2.length()-1]-'0') + upper;

            if(temp >= 10){
                upper = 1;
                temp -= 10;
            }
            else{
                upper = 0;
            }

            result = to_string(temp) + result;
            num2.pop_back();
        }
    }
    else{
        for(int i=num1.length()-1; i>=0; i--){
            int temp = int(num1[num1.length()-1]-'0') + upper;

            if(temp >= 10){
                upper = 1;
                temp -= 10;
            }
            else{
                upper = 0;
            }

            result = to_string(temp) + result;
            num1.pop_back();
        }
    }

    if(upper){
        result = "1" + result;
    }

    cout << result;
    return 0;
}