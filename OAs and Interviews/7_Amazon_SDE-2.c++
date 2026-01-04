// 20 May 2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll n;
ll b[100000];

ll calculate(ll k)
{
    ll count = 0;
    for (int i = 0, j = n - 1; i < n; i++)
    {
        ll d = b[j] + b[i]; //[i............j]
        while (d > k && i != j)
        {
            j--;
            d = b[j] + b[i];
        }
        if (i == j)
        {
            break;
        }
        count += (j - i);
    }
    return count;
}

int main()
{
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    ll l, r;
    cin >> l >> r;
    sort(b, b + n);
    cout << calculate(r) - calculate(l - 1);

    return 0;
}
