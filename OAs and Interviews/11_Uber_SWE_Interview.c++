#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main()
{

    int n = 5;
    int dp[n + 1];

    dp[1] = 0;

    int i = 2;
    while (i <= n)
    {

        if (i % 2 == 0)
        {

            dp[i] = 1 + dp[i / 2];
        }

        else
        {

            dp[i] = min(1 + dp[i - 1], 2 + dp[(i + 1) / 2]);
        }

        i++;
    }
    cout << dp[n];
    return 0;
}