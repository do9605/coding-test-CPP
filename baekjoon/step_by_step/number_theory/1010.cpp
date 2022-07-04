#include <iostream>

using namespace std;

// 단순 조합 계산
// int main(){
//     int t, n, m;
//     int r, val;

//     cin >> t;

//     while(t--){
//         val = 1;
//         r = 1;

//         cin >> n >> m;

//         for(int i=m; i>m-n; i--){
//             val *= i;
//             val /= r++;
//         }

//         cout << val << '\n';
//     }
//     return 0;
// }


// DP 풀이
int dp[30][30];

int main() {
    int t, n, m;

    dp[1][0] = 1;
    dp[1][1] = 1;

    cin >> t;

    while(t--){
        cin >> n >> m;

        for(int i=2; i<=m; i++){
            for(int j=0; j<=n; j++){
                if(!j || i==j)
                    dp[i][j] = 1;
                else
                    dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
            }
        }

        cout << dp[m][n] << '\n';
    }

    return 0;
}