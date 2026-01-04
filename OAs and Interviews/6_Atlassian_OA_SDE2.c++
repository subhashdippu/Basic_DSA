// 27 May 2024
#include <bits/stdc++.h>
#include <set>
using namespace std;

typedef long long int ll;

int main()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> b(n + 1); // 1-based indexing
    for (int i = 1; i <= n; ++i)
    {
        cin >> b[i];
    }

    vector<ll> p(n + 1, 0);
    for (int i = 1; i <= n; ++i)
    {
        p[i] = b[i] + p[i - 1];
    }

    ll final_ans = -1e18;
    multiset<ll> u;

    for (int j = 1; j <= n; ++j)
    {
        ll r = -1e18; // RAM_RAM!!

        if (u.size() > k)
        {
            u.erase(u.find(p[j - k - 1])); // Remove p[j-k-1] if the size exceeds k
        }

        if (!u.empty())
        {
            r = p[j] - *u.begin(); // best-sum = p[j] - min(p[j-1], p[j-2], ..., p[j-k+1])
        }
        else
        {
            r = p[j];
        }

        final_ans = max(final_ans, r);
        u.insert(p[j]);
    }

    cout << final_ans << endl;

    return 0;
}
