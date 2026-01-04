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
        
        int p2 = 0;
        // if (i >= 0) {
            j = arr.size() - 1;
            while (j > i) {
                if (arr[j] > arr[i]) {
                    p2 = j;
                    break;
                }
                j--;
            }
            swap(arr[i], arr[p2]);
        // }
        
        sort(arr.begin() + i + 1, arr.end());

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
