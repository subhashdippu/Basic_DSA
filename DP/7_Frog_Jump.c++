// #include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    vector<int> arr = {10, 20, 400, 20};
    vector<int> dp(arr.size(), 0);
    dp[0] = arr[0];
    dp[1] = abs(arr[0] - arr[1]);
    int i = 2;
    while (i < arr.size())
    {
        dp[i] = min(dp[i - 1] + abs(arr[i - 1] - arr[i]), dp[i - 2] + abs(arr[i - 2] - arr[i]));
        i++;
    }
    cout << dp[arr.size() - 1];
    return 0;
}