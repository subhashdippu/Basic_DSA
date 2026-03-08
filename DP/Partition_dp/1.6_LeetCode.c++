// Radha
// Radha rrrr
// rrrrrrr

#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>arr, int n){
    int k = 3;
    vector<vector<int>>dp(n+5, vector<int>(k+1, INT_MAX));
    for(int i=0;i<=k; i++){
        dp[0][i] = 0;
    }
    for(int i=1; i<=n; i++){
        int maxi = 0;
        for(int z = 1; z<=k; z++){
            for(int j = i; j>=1; j--){
                maxi = max(arr[j-1], maxi);
                if(dp[j-1][z-1] != INT_MAX){
                    dp[i][z] = min(dp[i][z], dp[j-1][z-1] + maxi);
                }
            }

        }
    }
    cout<<dp[n][k];
}
int main(){
    vector<int>arr = {1,2,1,3,5};
    int n = arr.size();
    solve(arr, n);
    return 0;
}

