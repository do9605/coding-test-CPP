#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int case_num;
    int x1, y1, r1, x2, y2, r2;
    int distance;

    cin >> case_num;

    for(int i=0; i<case_num; i++){
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        distance = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
        // cout << distance << '\n';

        if(distance == 0){
            if(r1 != r2){
                cout << 0 << '\n';
            }
            else{
                cout << -1 << '\n';
            }
        }
        else if(distance == (r1+r2)*(r1+r2) || distance == (r1-r2)*(r1-r2)){
            cout << 1 << '\n';
        }
        else if(distance > (r1-r2)*(r1-r2) && distance < (r1+r2)*(r1+r2)){
            cout << 2 << '\n';
        }
        else{
            cout << 0 <<'\n';
        }
    }
    return 0;
}