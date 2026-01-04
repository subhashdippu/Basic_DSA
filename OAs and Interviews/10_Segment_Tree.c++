// 14, May 2024

//....only....start....and....end.....keep....changing....in....the....segment....tree!!!
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll a[200000];
ll segtree[1000000];

void build(ll node, ll start, ll end)
{
    if (start == end)
    {
        segtree[node] = a[start];
    }
    else
    {
        ll mid = (start + end) / 2;
        build(2 * node, start, mid);
        build(2 * node + 1, mid + 1, end);
        segtree[node] = segtree[2 * node] + segtree[2 * node + 1];
    }
}

ll query(ll node, ll start, ll end, ll l, ll r)
{

    if (start > r || end < l)
    {
        return 0;
    }

    if (start >= l && end <= r)
    {
        return segtree[node];
    }

    ll mid = (start + end) / 2;

    ll left = query(node * 2, start, mid, l, r);
    ll right = query(node * 2 + 1, mid + 1, end, l, r);

    return (left + right);
}

void update(ll node, ll start, ll end, ll ind, ll value)
{
    if (start == end)
    {
        segtree[node] = value;
        a[ind] = value;
    }
    else
    {
        ll mid = (start + end) / 2;

        if (ind <= mid)
        {
            update(2 * node, start, mid, ind, value);
        }
        else
        {
            update(2 * node + 1, mid + 1, end, ind, value);
        }

        segtree[node] = segtree[2 * node] + segtree[2 * node + 1];
    }
}

int main()
{
    ll n;
    cin >> n;
    ll i = 0;
    while (i <= n - 1)
    {
        cin >> a[i];
        i++;
    }
    build(1, 0, n - 1);
    update(1, 0, n - 1, 4, 100);
    cout << query(1, 0, n - 1, 1, 4);

    return 0;
}