#include<iostream>
#include <vector>
using namespace std;
typedef long long ll;

const int MOD = 1e9 + 7;

int main() {
    int n = 7;
    vector<int> a = {2, 5, 2, 54, 67, 56, 4545};
    vector<int> b = {21, 25, 211, 5, 7, 5, 45};
    vector<ll> dpa_even(n + 1, 0), dpa_odd(n + 1, 0);
    vector<ll> dpb_even(n + 1, 0), dpb_odd(n + 1, 0);
    
    // Base Cases
        dpa_even[1] = (a[1] % 2 == 0);
        dpa_odd[1] = (a[1] % 2 != 0);
        dpb_even[1] = (b[1] % 2 == 0);
        dpb_odd[1] = (b[1] % 2 != 0);
    
        for (int i = 2; i <= n; i++) {
            if (a[i] % 2 == 0) {
                dpa_even[i] = dpa_even[i - 1] + dpb_even[i - 1];
                dpa_odd[i] = dpa_odd[i - 1] + dpb_odd[i - 1];
            } else {
                dpa_even[i] = dpa_odd[i - 1] + dpb_odd[i - 1];
                dpa_odd[i] = dpa_even[i - 1] + dpb_even[i - 1];
            }
    
            if (b[i] % 2 == 0) {
                dpb_even[i] = dpb_even[i - 1] + dpa_even[i - 1];
                dpb_odd[i] = dpb_odd[i - 1] + dpa_odd[i - 1];
            } else {
                dpb_even[i] = dpb_odd[i - 1] + dpa_odd[i - 1];
                dpb_odd[i] = dpb_even[i - 1] + dpa_even[i - 1];
            }
        }
    
        ll total_even = dpa_even[n] + dpb_even[n];
        ll total_odd = dpa_odd[n] + dpb_odd[n];
    
        cout << "Even Journeys: " << total_even << endl;
        cout << "Odd Journeys: " << total_odd << endl;
    
        return 0;
    }
    
