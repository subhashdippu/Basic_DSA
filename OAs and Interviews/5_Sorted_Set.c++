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
    multiset<ll> s;
    s.insert(2);
    s.insert(4);
    s.insert(6);
    s.insert(8);

    ll v1 = bigger(s, 2);
    cout << v1 << " ";

    v1 = smaller(s, 1);

    cout << v1;
}