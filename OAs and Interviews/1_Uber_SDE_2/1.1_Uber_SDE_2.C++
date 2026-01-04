// Brute force
#include <bits/stdc++.h>
using namespace std;

int match(string s1, string s2)
{
    int count = 0;
    for (int i = 0; i < min(s2.size(), s1.size()); i++)
    {
        if (s1[i] == s2[i])
        {
            count++;
        }
    }
    return count;
}
int main()
{
    string g[] = {"abc", "ade", "bbc"};
    int f_ans[] = {0};
    int n = sizeof(g) / sizeof(g[0]);
    for (int i = n - 1; i >= 0; i--)
    {
        int ans = 0;
        if (i != n - 1)
        {
            for (int j = i + 1; j < n; j++)
            {
                int count = match(g[i], g[j]);
                ans += count;
            }
        }
        f_ans[i] = ans;
    }

    for (int i = 0; i < n; i++)
    {
        cout << f_ans[i] << " ";
    }
    return 0;
}