#include <iostream>

using namespace std;

int main() {
    int num;
    int cycled = 0;
    int cycle = 0;
    cin >> num;
    cycled = num;

    do{
        num = ((num % 10)*10) + (((num / 10) + (num % 10)) % 10);
        cycle += 1;
    }while((num != cycled));

    cout << cycle << '\n';

    return 0;
}