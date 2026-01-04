// Max_Sum_Sub_Array
// Date 22, Jan
#include <iostream>
using namespace std;
int maxSum(int arr[], int n)
{
    int sum = 0;
    int dp[n + 1];
    int i = 0;
    while (i < n)
    {
        dp[i] = max(max(arr[i], dp[i - 1] + arr[i]), 0);
        sum = max(dp[i], sum);
        i++;
    }
    return sum;
}
int main()
{
    int arr[] = {-1, 34, -2, 3, 4, 5, -10};
    int size = sizeof(arr) / sizeof(int);
    int ans = maxSum(arr, size);
    cout << ans;
    return 0;
}