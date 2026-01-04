#include <iostream>
using namespace std;
// Here in dp we are just storing the best answer till current index not storing the answer
int main()
{

    // int arr1[] = {1, 5, 3, 21234};
    // int arr2[] = {-4509, 5, 200, 3, 40};
    // int n = sizeof(arr1) / sizeof(arr1[0]);
    // int dp[n];
    // dp[0] = max(arr1[0], arr2[0]);
    // dp[1] = max(max(arr1[1], arr2[1]), dp[0]);
    // int i = 2;
    // while (i <= n)
    // {
    //     int x = dp[i - 1];
    //     int y = arr1[i] + dp[i - 2];
    //     int z = arr2[i] + dp[i - 2];
    //     dp[i] = max(x, max(y, z));
    //     i++;
    // }
    // cout << dp[n - 1];

    int arr1[] = {1, 5, 3, 21234};
    int arr2[] = {-4509, 5, 200, 3, 40};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int dp[n];
    dp[0] = max(arr1[0], arr2[0]);
    dp[1] = max(max(arr1[1], arr2[1]), dp[0]);
    int i = 2;
    while (i < n)
    {
        dp[i] = max(max(arr1[i], arr2[i]) + dp[i - 2], dp[i - 1]);
        i++;
    }
    cout << dp[n - 1];
    return 0;
}