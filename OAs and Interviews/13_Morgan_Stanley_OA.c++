#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int MOD = 1000000007;

int main()
{
    ll n, m;
    cin >> n >> m;

    vector<ll> b(n + 1, 0);

    for (ll i = 1; i <= n; ++i)
    {
        cin >> b[i];
    }

    vector<vector<ll>> dp(n + 1, vector<ll>(m + 1, 0));
    vector<vector<ll>> prefix(n + 1, vector<ll>(m + 1, 0));
    vector<vector<ll>> dp2(n + 1, vector<ll>(m + 1, 0));
    vector<vector<ll>> prefix2(n + 1, vector<ll>(m + 1, 0));

    // Base case
    if (b[1] == -1)
    {
        for (ll j = 1; j <= m; ++j)
        {
            dp[1][j] = 1;
            dp2[1][j] = 1;
        }
    }
    else
    {
        ll g = b[1];
        dp[1][g] = 1;
        dp2[1][g] = 1;
    }

    // Initialize prefix array for the first row
    for (ll j = 1; j <= m; ++j)
    {
        prefix[1][j] = (prefix[1][j - 1] + dp[1][j]) % MOD;
        prefix2[1][j] = (prefix2[1][j - 1] + dp2[1][j]) % MOD;
    }

    for (ll i = 2; i <= n; ++i)
    {
        if (b[i] == -1)
        {
            for (ll j = 1; j <= m; ++j)
            {
                if (i % 2 != 0)
                { // If i is odd

                    dp[i][j] = prefix[i - 1][m] - prefix[i - 1][j];
                    dp2[i][j] = prefix2[i - 1][j - 1];
                }
                else
                { // If i is even
                    dp[i][j] = prefix[i - 1][j - 1];

                    dp2[i][j] = prefix2[i - 1][m] - prefix2[i - 1][j];
                }
            }
        }
        else
        {
            ll g = b[i];
            if (i % 2 != 0)
            { // If i is odd
                dp[i][g] = (prefix[i - 1][m] - prefix[i - 1][g] + MOD) % MOD;

                dp2[i][g] = prefix2[i - 1][g - 1];
            }
            else
            { // If i is even
                dp[i][g] = prefix[i - 1][g - 1];

                dp2[i][g] = (prefix2[i - 1][m] - prefix2[i - 1][g] + MOD) % MOD;
            }
        }

        // Update the prefix array
        for (ll j = 1; j <= m; ++j)
        {
            prefix[i][j] = (prefix[i][j - 1] + dp[i][j]) % MOD;
            prefix2[i][j] = (prefix2[i][j - 1] + dp2[i][j]) % MOD;
        }
    }

    ll ans = 0;

    if (b[n] == -1)
    {
        for (ll j = 1; j <= m; ++j)
        {
            ans = (ans + dp[n][j] + dp2[n][j]) % MOD;
        }
    }
    else
    {
        ll g = b[n];
        ans = dp[n][g] + dp2[n][g];
    }

    cout << ans << "\n";

    return 0;
}
