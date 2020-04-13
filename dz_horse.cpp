#include <iostream>
using namespace std;
int main(){
    int n, m, i, j;
    cin >> n >> m;
    int dp[m][n];
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            dp[i][j] = 0;
        }
    }
    dp[0][0]= 1;
    dp[2][1]= 1;
    dp[1][2]= 1;
    for (i = 2; i < m; i++){
        for (j = 2; j < n; j++){
            dp[i][j] = dp[i - 2][j - 1] + dp[i - 1][j - 2];
        }
     }
    cout << dp[m - 1][n - 1];
}
