// No of palindrome in the given range

#include<iostream>
using namespace std;

int dp[500][500] = {0};
int dp1[500][500];
void solve(string s, int n){
    int longest = 1;
    int count =0;
    for(int i=0;i<n; i++){
        dp[i][i] = 1;
        dp1[i][i] = 1;
        count++;
    }
    for(int i=0;i<n-1; i++){
        if(s[i]==s[i+1]){
            dp[i][i+1] = 1;
            // dp1[i][i+1] = 3;
            count++;
            longest = 2;
        }
        dp1[i][i+1] = dp[i][i] + dp[i+1][i+1] + dp[i][i+1];

    }
    int length = 3;
    while(length<=n){
        int i =0;
        while(i<n-length+1){// +1 because n is 0 based and length is exect 3,4,5,6,7
            int j = i + length - 1;//i becase suppose i = 2 so i + length 
            if(s[i] == s[j] && dp[i+1][j-1] == 1){
                dp[i][j] = 1;
                count++;
                longest = max(longest, j-i+1);
            }
            dp1[i][j] = dp1[i][j-1] + dp1[i+1][j] - dp1[i+1][j-1] + dp[i][j];// if dp[i][i] is the palindrom then add 1 

            i++; 
        }
        length++;
    }
    cout<<"Count of total palindrom is: "<<count<<" Longest Palindeom "<<longest<<"\n";
}
int main(){
    string s = "bbcb";
    
    int n = s.size();
    solve(s, n);
    cout<<dp1[0][3]<<"\n";
    cout<<dp1[0][1]<<"\n";
    cout<<dp1[0][2]<<"\n";
    return 0;
}