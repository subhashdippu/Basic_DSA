#include<iostream>
// #include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {10, 20, 400, 20};
    int n = arr.size();

    if (n < 2)
    {
        cout << "Array should have at least 2 elements.\n";
        return 0;
    }

    vector<int> dp(n, INT_MAX); 
    dp[0] = arr[0];
    dp[1] = abs(arr[0] - arr[1]);

    int k = 3; 
    int value = INT_MAX;

    for (int i = 2; i < n; i++)
    {
        for (int j = 1; j <= k && i - j >= 0; j++)
        {
            dp[i] = min(dp[i], dp[i - j] + abs(arr[i - j] - arr[i]));
        }
        value = min(value, dp[i]);
    }

    cout << "Minimum Cost: " << value << "\n";
    return 0;
}





