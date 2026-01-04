#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cout << "Enter the n: ";
    int n;
    cin >> n;
    vector<string> s(n + 1);
    vector<int> dp(n + 1, 1);
    int kk = 0;
    int r = 0, g = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
    }

    for (int i = 1; i <= n; i++)
    {
        char first = s[i][0];
        char second = s[i][1];

        if (first == 'r')
        {
            dp[i] = 1 + r;
            if (second == 'g')
            {
                g = max(g, dp[i]);
            }
            else
            {
                r = max(r, dp[i]);
            }
        }
        else
        {
            dp[i] = 1 + g;
            if (second == 'g')
            {
                g = max(g, dp[i]);
            }
            else
            {
                r = max(r, dp[i]);
            }
        }
        kk = max(kk, dp[i]);
    }

    cout << kk << endl;
    return 0;
}
