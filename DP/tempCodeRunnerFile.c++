#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void solve(vector<int>arr, int n){
    vector<int>dp(n+5,0);
    dp[0] = 0;
    dp[1] = 1;
    
    int x = 1, y = 50, z = 85, b = 100;
    for(int i = 2; i<=n; i++){
        int v1 = INT_MAX;
        int v2 = INT_MAX;
        int v3 = INT_MAX;
        int v4 = INT_MAX;
        v1 = dp[i-1] + b;
        if(i%7==0){
            v2 = dp[i/7] + x;
        }
        if(i%5==0){
            v3 = dp[i/5] + z;
        }
        if(i%3==0){
            v4 = dp[i/3] + y;
        }
        int x1 = min({v1,v2,v3,v4});
        dp[i] = x1;
    }
    cout<<"\n";
    cout<<dp[n-1];
}

int main(){
    vector<int> arr = {2,3,5,8,10};
    int n = arr.size();
    solve(arr, 3);

    return 0;
}
