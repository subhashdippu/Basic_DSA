#include<iostream>
using namespace std;

int sum(vector<int>arr, int a, int b){
    int s = 0;
    for(int i = a; i<=b; i++){
        s += arr[i];
    }
    return s;
}
void solve(vector<int>arr, int n){
    int dp[500][500];
    for(int i=0;i<n; i++){
        dp[i][i] = 0;
    }
    for(int i=0;i<n-1; i++){
        dp[i][i+1] = arr[i] + arr[i + 1];
    }
    int length = 3;
    while(length <= n){
        int i = 0;
        int j = i + length - 1;
        while(i<n-length+1){
            int mini = INT_MAX;
            int k = i; 
            while(k<j){
                int pos = dp[i][k] + dp[k+1][j] + sum(arr,i,j);
                mini = min(pos, mini);
                k++;
            }
            dp[i][j] = mini;
            i++;
            j++;
        }
        length++;
    }
    cout<<dp[0][n-1];
}
int main(){
    vector<int>arr = {5,8,2,10};
    int n = arr.size();
    solve(arr, n);
    return 0;
}