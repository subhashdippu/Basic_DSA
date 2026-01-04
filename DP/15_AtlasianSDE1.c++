#include <iostream>
using namespace std;
typedef long long int ll;

ll max3(ll a, ll b, ll c) {
    return max(a, max(b, c));
}

ll min3(ll a, ll b, ll c) {
    return min(a, min(b, c));
}

int main() {
    vector<pair<char, ll>> ops = {
        {'N', 0},
        {'-', 2},
        {'N', 0}
    };

    long long b = ops.size(); 
    long long dp1[b + 1], dp2[b + 1];
    dp1[0] = dp2[0] = 1; 

    for (ll i = 1; i <= b; i++) {
        char op = ops[i - 1].first;
        ll val = ops[i - 1].second;

        if (op == '+') {
            dp1[i] = max3(dp1[i - 1] + val, dp2[i - 1] + val, dp1[i - 1]);
            dp2[i] = min3(dp1[i - 1] + val, dp2[i - 1] + val, dp2[i - 1]);
        } else if (op == '-') {
            dp1[i] = max3(dp1[i - 1] - val, dp2[i - 1] - val, dp1[i - 1]);
            dp2[i] = min3(dp1[i - 1] - val, dp2[i - 1] - val, dp2[i - 1]);
        } else if (op == '*') {
            dp1[i] = max3(dp1[i - 1] * val, dp2[i - 1] * val, dp1[i - 1]);
            dp2[i] = min3(dp1[i - 1] * val, dp2[i - 1] * val, dp2[i - 1]);
        } else if (op == '/') {
            if (val == 0) {
                dp1[i] = dp1[i - 1];
                dp2[i] = dp2[i - 1];
            } else {
                dp1[i] = max3(dp1[i - 1] / val, dp2[i - 1] / val, dp1[i - 1]);
                dp2[i] = min3(dp1[i - 1] / val, dp2[i - 1] / val, dp2[i - 1]);
            }
        }
        else {  
            dp1[i] = max3(-1 * dp1[i - 1], -1 * dp2[i - 1], dp1[i - 1]);
            dp2[i] = min3(-1 * dp1[i - 1], -1 * dp2[i - 1], dp2[i - 1]);
        }
    }

    cout << dp1[b] << "\n"; 
    return 0;
}
