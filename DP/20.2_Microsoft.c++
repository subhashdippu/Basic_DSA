// Radha
#include<iostream>
using namespace std;

void solve(int n){
    vector<vector<int>>dp(n+5, vector<int>(3,0));
    
    dp[0][0] = 1;
    int i = 1;
    while(i<=n){
        if(i-1 >= 0) dp[i][0] += dp[i-1][0];
        if(i-2 >= 0) dp[i][0] += dp[i-2][0];
        if(i-6 >= 0) dp[i][0] += dp[i-6][0];

        if(i-1 >= 0) dp[i][1] += dp[i-1][1];
        if(i-2 >= 0) dp[i][1] += dp[i-2][1];
        if(i-6 >= 0) dp[i][1] += dp[i-6][1];
        if(i-1 >= 0) dp[i][1] += dp[i-1][1];

        if(i-1 >= 0) dp[i][2] += dp[i-1][2];
        if(i-2 >= 0) dp[i][2] += dp[i-2][2];
        if(i-6 >= 0) dp[i][2] += dp[i-6][2];
        if(i-2 >= 0) dp[i][2] += dp[i-2][2];

        i++;
    } 
    cout<<dp[n][0] + dp[n][1] + dp[n][2];

}
int main(){
    int n = 3;
    solve(n);

    return 0;
}