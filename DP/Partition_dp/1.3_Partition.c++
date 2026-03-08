// Radha
#include<iostream>
#include <climits>
#include<vector>

using namespace std;

void solve(vector<long long> arr, int n){
    long long dp[500];
    typedef long long int ll;
    for(int i = 0; i < 500; i++)
        dp[i] = LLONG_MAX;

    dp[0] = 0;
    dp[1] = 0;
    dp[2] = arr[0] - arr[1];

      for (ll i = 3; i <= n; i++) {
        for (ll j = i - 2; j >= 0; j--) {
            dp[i] = max(dp[i], dp[j] + arr[j + 1] - arr[i-1]);
        }
    }

    cout << dp[n];
}

int main(){
    vector<long long> arr = {5,10,5,10,1,1,8,2};
    int n = arr.size();
    solve(arr, n);
    return 0;
}
