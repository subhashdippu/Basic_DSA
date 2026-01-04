#include <bits/stdc++.h>
using namespace std;
// TC = O(N^2)
// SC = O(N)
int longest(int arr[], int n)
{
    int ans = 0;
    vector<int> dp(n + 1, 1);
    // int dp[100] = {1, 1, 1, 1};
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            if (arr[j] < arr[i])
            {
                dp[i] = max(dp[i], dp[j] + 1); // Here dp[j] + 1 means you are including the current index too or dp[i] means the best answer is prev one
            }
        }
        ans = max(ans, dp[i]); // if may be the longest string will be before last index
    }
    return ans;
}
int main()
{
    int arr[] = {1, 8, 3, 4};
    int n = sizeof(arr) / sizeof(int);
    int a = longest(arr, n);
    cout << a;
    return 0;
}