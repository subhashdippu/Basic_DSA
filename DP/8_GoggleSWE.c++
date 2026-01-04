#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> b = {5, 8, 4, 100, -5, -5, 5, 10};
    int n = b.size();
    vector<int> dp(n, 0);

    dp[0] = b[0];

    dp[1] = b[0] + b[1];

    dp[2] = b[0] + b[1] + b[2];

    for (int i = 3; i < n; i++)
    {
        dp[i] = dp[i - 1] + b[i]; 
        if (i >= 3)
            dp[i] = max(dp[i], dp[i - 3] + b[i]); 
        if (i >= 5)
            dp[i] = max(dp[i], dp[i - 5] + b[i]);
    }

    cout << dp[n - 1]; 
    return 0;
}
