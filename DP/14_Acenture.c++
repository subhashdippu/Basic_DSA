#include<iostream>
#include <vector> 
using namespace std;

typedef long long int ll ; 
 
int my(int k,int r,int g){
 
    return min(k,max(r,g));
}
int main(){
    
    
    vector<int>b = {2, 5, 8 };
    int n = b.size();

    int dp[n+1][5]; 
 
    dp[1][2] = b[1] ; 
    dp[1][1] = 100000000 ; 
    dp[2][2] = 100000000 ; 
    dp[2][1] = dp[1][2] + b[2] + b[3] ;
 
  
    int i = 3 ; 
    while(i<=n-1){
 
 
        dp[i][2] = b[i] + min(dp[i-2][1],dp[i-2][2]);
        dp[i][1] = b[i] + b[i+1] + dp[i-1][2] ; 
 
        i++;
    }
    dp[i][2] = b[n] + min(dp[i-2][2],dp[i-2][1]);
    dp[i][1] = 100000000 ; 
    cout<<my(dp[n][2],dp[n-1][2],dp[n-1][1]);

    return 0;
}