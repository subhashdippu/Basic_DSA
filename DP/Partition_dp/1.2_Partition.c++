#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

void solve(vector<int> &arr, int n, int m, int k) {
    static ll dp[505][505];

    // Initialize DP
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= k; j++) {
            dp[i][j] = -1e18;
        }
    }

    dp[0][0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int ptr = 1; ptr <= k; ptr++) {

            ll sum = 0;
            ll ans = 0;

            for (int j = i - 1; j >= 0; j--) {
                sum += arr[j];
                if (sum > m) break;

                if (dp[j][ptr - 1] > 0) {
                    ans += dp[j][ptr - 1];
                }
            }

            if (ans > 0) {
                dp[i][ptr] = ans;
            }

            cout << i << " " << ptr << " " << dp[i][ptr] << "\n";
        }
    }

    cout << dp[n][k];
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 4};
    int n = arr.size();
    int m = 5;
    int k = 5;

    solve(arr, n, m, k);
    return 0;
}
