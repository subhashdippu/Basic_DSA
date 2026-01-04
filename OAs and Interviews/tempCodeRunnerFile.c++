#include <bits/stdc++.h>
using namespace std;

int match(string s1, string s2)
{
    int n = 4;
    vector<vector<int>> g(200000 + 5, vector<int>(28, 0));
    for (int i = n - 1; i >= 0; i--)
    {
        string x[i];
        for ()
    }
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