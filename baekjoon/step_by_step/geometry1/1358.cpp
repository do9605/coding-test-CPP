#include <iostream>

using namespace std;

int main(){
    int w, h, x, y, p;
    int x_val, y_val;
    int count = 0;

    cin >> w >> h >> x >> y >> p;

    while(p--){
        cin >> x_val >> y_val;

        if((x-x_val)*(x-x_val) + (y+h/2-y_val)*(y+h/2-y_val) <= (h/2)*(h/2)
            || (x_val >= x && x_val <= x+w && y_val >= y && y_val <= y+h)
            || (x+w-x_val)*(x+w-x_val) + (y+h/2-y_val)*(y+h/2-y_val) <= (h/2)*(h/2))
            count++;
    }
    cout << count << '\n';
    return 0;
}