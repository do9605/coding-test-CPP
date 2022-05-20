#include <iostream>

using namespace std;

bool han(int num){
    if (num < 100){
        return true;
    }
    else{
        int a = num/100;
        int b = (num/10)%10;
        int c = num%10;

        if ((b-a) == (c-b))
            return true;
        else
            return false;  
    }
}

int main(){
    int num;
    int count = 0;

    cin >> num;

    for(int i=1; i<=num; i++){
        if(han(i))
            count += 1;
    }
    // cout << "han test 123 : " << han(123) << endl;
    cout << count << '\n';
    return 0;
}