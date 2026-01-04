#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solve(vector<int> arr) {
    int i = arr.size() - 2;
    int j = arr.size() - 1;

    while (i >= 0) {
        if (arr[i] < arr[i + 1]) {
            break;
        }
        i--;
    }

    int p1 = 0, p2 = 0;
    // if (i >= 0) {
    while(j>i){
        // for (int k = arr.size() - 1; k > i; k--) {
            if (arr[j] > arr[i]) {
                p1 = arr[j];
                p2 = j;
                break;
            }
        }
        swap(arr[i], arr[p2]);
    // }

    sort(arr.begin() + i + 1, arr.end());

    return arr;
}

int main() {
    vector<int> arr = {2, 4, 1, 7, 5, 0};
    vector<int> result = solve(arr);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
