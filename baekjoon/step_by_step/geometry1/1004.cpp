#include <iostream>

using namespace std;

int main(){
    int test_case;

    cin >> test_case;

    for(int i=0; i<test_case; i++){
        int x1, y1, x2, y2;
        int planet_count;
        int x_planet, y_planet, r_planet;
        int enter = 0, exit = 0;

        cin >> x1 >> y1 >> x2 >> y2;
        cin >> planet_count;

        while(planet_count--){
            cin >> x_planet >> y_planet >> r_planet;

            if((x1-x_planet)*(x1-x_planet) + (y1-y_planet)*(y1-y_planet) < r_planet*r_planet){
                if((x2-x_planet)*(x2-x_planet) + (y2-y_planet)*(y2-y_planet) > r_planet*r_planet)
                    exit++;
            }
            if((x1-x_planet)*(x1-x_planet) + (y1-y_planet)*(y1-y_planet) > r_planet*r_planet){
                if((x2-x_planet)*(x2-x_planet) + (y2-y_planet)*(y2-y_planet) < r_planet*r_planet)
                    enter++;
            }
        }

        cout << exit+enter << '\n';
    }

    return 0;
}