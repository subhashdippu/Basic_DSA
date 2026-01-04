#include <iostream>
using namespace std;

int countSequences(int n, int b[])
{
    int dp[n + 1][2];

    dp[1][0] = 1;
    dp[2][0] = 1;

    for (int i = 3; i <= n; i++)
    {

        dp[i][0] = dp[i - 1][0];

        if (b[i - 2] == 2)
        {
            dp[i][0] += dp[i - 2][0];
        }

        dp[i][1] = dp[i - 1][1];

        if (b[i - 2] == 2)
            dp[i][1] += dp[i - 2][1];

        if (b[i - 3] == 2 and b[i - 2] == 2)
            dp[i][1] += dp[i - 3][0];
    }

    return dp[n][0] + dp[n][1]; 
}

int main()
{
    int n = 5;
    int b[] = {1, 2, 1, 1, 2}; // Example array b

    cout << countSequences(n, b) << endl;

    return 0;
}
