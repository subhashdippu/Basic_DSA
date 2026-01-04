#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 4, 5, 6, -7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int dp[n + 1];
    dp[0] = arr[0];
    dp[1] = max(arr[0], arr[1]);
    int i = 2;
    while (i < n)
    {
        dp[i] = max(arr[i] + dp[i - 2], dp[i - 1]);
        i++;
    }
    cout << dp[n - 1];
    return 0;
}
