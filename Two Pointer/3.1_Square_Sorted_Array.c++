#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// returns index of first positive number
int firstPositiveIndex(vector<int>& arr) {
    int low = 0, high = arr.size() - 1;
    int ans = arr.size();   // default: no positive

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] > 0) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

void solve(vector<int> arr, int n) {
    vector<int> vec(n);

    int j = firstPositiveIndex(arr); 
    int i = j - 1;                  
    int k = 0;

    while (i >= 0 && j < n) {
        if (abs(arr[i]) > abs(arr[j])) {
            vec[k++] = arr[j] * arr[j];
            j++;
        } else {
            vec[k++] = arr[i] * arr[i];
            i--;
        }
    }

    while (i >= 0)
        vec[k++] = arr[i] * arr[i--];

    while (j < n)
        vec[k++] = arr[j] * arr[j++];

    for (int x : vec)
        cout << x << " ";
}

int main() {
    vector<int> arr = {-4, -1, 0, 3, 10};
    solve(arr, arr.size());
    return 0;
}
