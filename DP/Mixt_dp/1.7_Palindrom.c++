#include<iostream>
using namespace std; 

int dp[500][500];
void solve(string s, int n){
    for(int i=0;i<n; i++){
        dp[i][i] = 1;
    }
    for(int i=0;i<n-1; i++){
        if(s[i] == s[i+1]){
            dp[i][i+1] = 2;
        }
        else{
            dp[i][i+1] = 1;
        }
    }
    int length = 3;
    while(length<=n){
        int i = 0; 
        while(i<n-length + 1){
            int j = i + length - 1;
            if(s[i] != s[j]){
                dp[i][j] = max(dp[i][j-1], dp[i+1][j]);
            }
            else{
                dp[i][j] = 2 + dp[i+1][j-1];
            }
            i++;
        }
        length++;
    }
    cout<<dp[0][n-1];
}
int main(){
    string s = "bbcdbbb";
    int n = s.size();
    solve(s, n);
    return 0;
}