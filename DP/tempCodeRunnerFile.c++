#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int dp[500][500];

void solve(vector<int>a,vector<int>b, int n){
    n = 5;
    vector<int>dp(n+5, 0);
    dp[0] = 1;
    dp[1] = 1;
    for(int i=2;i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
        if(i>=4){
            dp[i] += dp[i-4];
        }
        if(i>=6){
            dp[i] += dp[i-6];
        }
    }
    cout<<dp[n];
}


int main(){
    vector<int>a = {0,4,1,4,20,2};
    vector<int>b = {0,2,2,10,21,23};
    int n = a.size();
    int m = a.size();
    solve(a,b,n);
    return 0;
}