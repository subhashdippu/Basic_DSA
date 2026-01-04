#include<iostream>
using namespace std;

int main(){
    vector<int>a = {0,5, 3, 4};
    vector<int>b = {0,10, 10, 10};

    int dp[100005][3][3]; 

    dp[1][1][1] = a[1];
    dp[1][1][2] = a[1];
    dp[1][2][1] = b[1];
    dp[1][2][2] = b[1];
    int n = a.size() - 1;
    int i = 2;
    
    while(i<a.size()){
        dp[i][1][1] = a[i] + a[i-1] + max(dp[i-2][2][2], dp[i-2][2][1]);
        dp[i][1][2] = a[i] + b[i-1] + max({dp[i-2][1][1], dp[i-2][1][2], dp[i-2][2][1]});
        dp[i][2][1] = b[i] + a[i-1] + max({dp[i-2][2][2], dp[i-2][2][1], dp[i-2][1][2]});
        dp[i][2][2] = b[i] + a[i-1] + max(dp[i-2][1][1], dp[i-2][1][2]);
        i++;
    }
    cout<<max({dp[n][1][1],dp[n][1][2],dp[n][2][2],dp[n][2][1]}); 
    return 0;   
}