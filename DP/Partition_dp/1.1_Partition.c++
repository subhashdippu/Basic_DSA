#include<iostream>
using namespace std;

void solve(vector<int>arr, int n, int m){
    int dp[400];
    dp[0] = 1;
    // dp[1] = 1;
    for(int i=1; i<=n; i++){
        int j = i;
        int ans = 0;
        int sum = 0;
        while(j>=1 && sum<m){
            int temp = dp[j-1];
            ans += temp;
            sum += arr[j];
            j--;
        }
        dp[i] = ans;
    }
    cout<<dp[n];
}
int main(){
    vector<int>arr = {1,2,3,4,5};
    int n = arr.size();
    int m = 5;
    solve(arr, n, m);
    return 0;
}