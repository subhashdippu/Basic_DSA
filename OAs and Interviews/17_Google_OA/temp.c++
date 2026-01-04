#include <bits/stdc++.h>
using namespace std;
int p = -1;
int isMatching(string a, string b)
{
    int i = 0, j = 0, count = 0;
    int n = a.size();
    int m = b.size();
    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            if (count == 0)
            {
                p = j;
            }
            i++;
            j++;
            count++;
        }
        else
        {
            i++;
        }
    }
    count == m;
}
int main()
{
    string a = "ramram";
    string b = "rasr";
    int ans = -1;
    for (int i = 1; i < b.size(); i++)
    {
        for (char c = 'a'; c <= 'z'; c++)
        {
            string r = b;
            r[i] = c;
            p = -1;
            if (isMatching(a, r))
                ans = p + 1;
        }
    }
    cout << ans;
    cout << "\n";
    return 0;
}