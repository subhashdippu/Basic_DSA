#include <iostream>
using namespace std;

int mini(int a, int b, int c)
{
    return min(a, min(b, c));
}

int solve(int x)
{
    int dp[x];
    dp[0] = 0;
    dp[1] = 1;
    int i = 2;
    while (i <= x)
    {
        if (i % 7 == 0)
        {
            dp[i] = mini(dp[i - 1] + 1, dp[i - 2] + 1, dp[i / 7] + 1);
        }
        else
        {
            dp[i] = min(dp[i - 1] + 1, dp[i - 2] + 1);
        }
        i++;
    }
    return dp[x];
}
int main()
{
    vector<int>arr = {4, 12, 13, 18, 10, 12};
    int x = 15;
    cout << "Minimum number of steps required to make the given number to 1" << solve(x);
    return 0;
}