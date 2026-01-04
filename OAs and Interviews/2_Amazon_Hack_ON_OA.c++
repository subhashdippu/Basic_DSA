#include <bits/stdc++.h>
#include <set>

using namespace std;
typedef long long int ll;
ll bigger(multiset<ll> &s, ll vl)
{

    ll q = s.size();
    if (q == 0)
    {
        return -2;
    }
    auto itr = s.upper_bound(vl);
    if (itr == s.end())
    {
        return -1;
    }
    ll v1 = *(itr);
    return v1;
}
ll smaller(multiset<ll> &s, ll vl)
{
    ll q = s.size();
    if (q == 0)
    {
        return -2;
    }
    auto itr = s.find(vl);
    if (itr != s.end())
    {
        if (itr == s.begin())
        {
            return -1;
        }

        --itr;
        ll v1 = *(itr);
        return v1;
    }
    else
    {
        auto itr = s.upper_bound(vl);
        ll v1 = 0;
        if (itr == s.begin())
        {
            v1 = -1;
            return v1;
        }

        --itr;

        v1 = *(itr);
        return v1;
    }
}

int main()
{

    ll n;
    cin >> n;
    vector<ll> b(n, 0);
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    multiset<ll> k;
    for (ll i = 0; i < n; i++)
    {
        ll v = smaller(k, b[i]);
        if (v == -1 || v == -2)
        {
            k.insert(b[i]);
        }
        else
        {
            k.erase(k.find(v));
            k.insert(b[i]);
        }
    }

    ll g = k.size();

    cout << g;

    return 0;
}