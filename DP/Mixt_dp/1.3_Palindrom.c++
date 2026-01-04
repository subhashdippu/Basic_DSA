#include<iostream>
using namespace std;

void solve(string s, int n){
    int dp[500][500];
    int longest = 1;
    int count =0;
    for(int i=0;i<n; i++){
        dp[i][i] = 1;
        count++;
    }
    for(int i=0;i<n-1; i++){
        if(s[i]==s[i+1]){
            dp[i][i+1] = 1;
            count++;
            longest = 2;
        }
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
            i++; 
        }
        length++;
    }
    cout<<"Count of total palindrom is: "<<count<<" Longest Palindeom "<<longest;
}
int main(){
    string s = "abbaxyz";
    int n = s.size();
    solve(s, n);
    return 0;
}