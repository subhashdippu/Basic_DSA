#include<iostream>
using namespace std;
int solve(int N){
    int x = 1, y = 50, z = 85, b = 100;
    int dp[N];
    dp[0] = 0;  
    dp[1] = 1;
    int i = 2;
    while(i<N){
        int v1 = dp[i-1] + b;
        int v2 = INT_MAX;
        int v3 = INT_MAX;
        int v4 = INT_MAX;
        v1 = dp[i-1] + b; 
        if(i%7 == 0){
            v2 = dp[i/7] + x;
        }
        if(i%3 == 0){
            v3 = dp[i/3] + y;
        }
        if(i%5 == 0){
            v4 = dp[i/5] + z;
        }
        dp[i] = min({v1, v2, v3,v4});
        i++;
    }
    return dp[N-1]; 
}
int main(){
    int N = 15;
    int ans = solve(N);
    cout<<ans;
    return 0;
}