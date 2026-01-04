#include<iostream>
// #include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "abaabcadef";
    int n = s.length();
    vector<int> dp(n, 1);
    int k = 2;
    int maximum = 1;

    for (int i = 1; i < n; i++)
    {
        if (abs(s[i] - s[i - 1]) <= k)
        {
            dp[i] = dp[i - 1] + 1;
        }
        else
        {
            dp[i] = 1;
        }
        maximum = max(maximum, dp[i]);
    }

    cout << "Longest Valid Substring Length: " << maximum << "\n";
    return 0;
}
