#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};
    int n = arr.size();
    int i = 0;
    int j = n - 1;

    while (i < j) {
        if (arr[i] == 0 && arr[j] != 0) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        else if (arr[i] != 0) {
            i++;
        }
        else if (arr[j] == 0) {
            j--;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
