#include<iostream>
using namespace std;
int dp[500][500];
void solve(string s, int n){
    int count = 0;

    for(int i=0;i<n; i++){
        dp[i][i] = 1;
        count++;
    }
    for(int i=0; i<n-1; i++){
        if(s[i] == s[i+1]){
            dp[i][i+1] = 1;
            count++;
        }
    }
    int length = 3;
    while(length<=n){
        for(int i=0;i<n - length+1; i++){
            int j = i + length - 1;
            if(s[i] == s[j] && dp[i+1][j-1] == 1){
                dp[i][j] = 1;
                count++;
            }
        } 
        length++;  
    }
    
    cout<<count;
}
int main(){
    string s = "aaa";
    int n = s.size();
    solve(s, n);
    return 0;
}