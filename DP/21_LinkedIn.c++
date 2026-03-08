// Radha
#include<iostream>
using namespace std;

void solve(int n){
    vector<int>dp(400);
    dp[0] = 1;
    dp[1] = 1;
    int i = 2;
    while(i<=n){
        dp[i] = dp[i-1] + dp[i-2];
        if(i >= 4){
            dp[i] += dp[i-4];
        }
        if(i>=6){
            dp[i] += dp[i-6];
        }
        i++;
    } 
    cout<<dp[n];

}
int main(){
    int n = 5;
    solve(n);

    return 0;
}