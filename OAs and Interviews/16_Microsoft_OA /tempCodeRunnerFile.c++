#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> s;
    int dp[100];
    s.push_back("RR");
    s.push_back("GG");
    s.push_back("RG");
    s.push_back("GR");
    s.push_back("RR");
    s.push_back("RR");
    char first;
    char second;
    int ans = 0;
    int r = 0;
    int g = 0;
    for (int i = 1; i <= s.size(); i++)
    {
        first = s[i][0];
        second = s[i][1];
        if (first == 'R')
        {
            dp[i] = r + 1;
            if (second == 'R')
            {
                r = max(dp[i], r);
            }
            else
            {
                g = max(dp[i], g);
            }
        }
        else
        {
            dp[i] = g + 1;
            if (second == 'G')
            {
                r = max(dp[i], r);
            }
            else
            {
                g = max(dp[i], g);
            }
        }
        ans = max(ans, dp[i]);
    }
    cout << ans;
    return 0;
}