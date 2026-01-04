#include <bits/stdc++.h>
using namespace std;
#define ll long long

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a == 0 || b == 0) ? 0 : (a / gcd(a, b)) * b;
}

vector<vector<int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
vector<string> graph;
vector<vector<int>> vis;

int cc, rmx, rmn, cmx, cmn;

void dfs(int r, int c)
{
    if (vis[r][c] || graph[r][c] == '.')
    {
        return;
    }
    vis[r][c] = 1;
    cc++;
    rmx = max(rmx, r);
    rmn = min(rmn, r);
    cmx = max(cmx, c);
    cmn = min(cmn, c);

    for (auto dir : directions)
    {
        int nr = r + dir[0];
        int nc = c + dir[1];
        if (nr >= 0 && nr < graph.size() && nc >= 0 && nc < graph[0].size())
        {
            dfs(nr, nc);
        }
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        graph.assign(n, "");
        vis.assign(n, vector<int>(m, 0));
        vector<int> emr(n, 0), emc(m, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> graph[i];
            for (int j = 0; j < m; j++)
            {
                if (graph[i][j] == '.')
                {
                    emr[i]++;
                    emc[j]++;
                }
            }
        }

        vector<int> mpr(n + 1, 0), mpc(m + 1, 0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (vis[i][j] || graph[i][j] == '.')
                    continue;
                cc = 0;
                rmx = rmn = i;
                cmx = cmn = j;
                dfs(i, j);

                rmn = max(rmn - 1, 0);
                rmx = min(rmx + 1, n - 1);
                cmn = max(cmn - 1, 0);
                cmx = min(cmx + 1, m - 1);
                mpr[rmn] += cc;
                mpr[rmx + 1] -= cc;
                mpc[cmn] += cc;
                mpc[cmx + 1] -= cc;
            }
        }

        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (i > 0)
                mpr[i] += mpr[i - 1];
            ans = max(ans, mpr[i] + emr[i]);
        }

        for (int i = 0; i < m; i++)
        {
            if (i > 0)
                mpc[i] += mpc[i - 1];
            ans = max(ans, mpc[i] + emc[i]);
        }

        cout << ans << endl;
    }
}