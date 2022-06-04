#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int x, y, w, h;
    int min_val;

    cin >> x >> y >> w >> h;

    min_val = min({x, y, w-x, h-y});
    cout << min_val << '\n';
    return 0;
}