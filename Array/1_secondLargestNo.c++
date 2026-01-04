#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {
    vector<int> arr = {4, 23, 5, 3, 32, 51, 56, 3, 54, 89};
    
    int largestNum = INT_MIN;
    int secondLargestNum = INT_MIN;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > largestNum) {
            secondLargestNum = largestNum;
            largestNum = arr[i];
        } else if (arr[i] > secondLargestNum && arr[i] != largestNum) {
            secondLargestNum = arr[i];
        }
    }

    cout << "Largest: " << largestNum << "\n";
    cout << "Second Largest: " << secondLargestNum << "\n";

    return 0;
}
