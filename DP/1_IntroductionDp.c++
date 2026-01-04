#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int dp[n + 1];
    int i = 0;
    while (i <= n - 1)
    {
        if (i == 0)
        {
            dp[i] = arr[i];
        }
        else
        {
            dp[i] = arr[i] + dp[i - 1];
        }
        i++;
    }
    // print the sum till index 3, 4, 2,6
    int m = 4;
    int till_index[] = {3, 4, 2, 6};
    i = 0;
    while (i < 4)
    {
        cout << dp[till_index[i]] << "\n";
        i++;
    }
    return 0;
}
