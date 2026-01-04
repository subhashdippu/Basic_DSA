#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {
    vector<int> arr = {4, 23, 5, 3, 32, 51, 56, 3, 54, 89};

    int largestNum = INT_MIN;
    int secondLargestNum = INT_MIN;
    int thirdLargestNum = INT_MIN;

    for (int i = 0; i < arr.size(); i++) {
        int current = arr[i];
        if (current > largestNum) {
            thirdLargestNum = secondLargestNum;
            secondLargestNum = largestNum;
            largestNum = current;
        }
        else if (current > secondLargestNum && current != largestNum) {
            thirdLargestNum = secondLargestNum;
            secondLargestNum = current;
        }
        else if (current > thirdLargestNum && current != largestNum && current != secondLargestNum) {
            thirdLargestNum = current;
        }
    }

    cout << "Largest: " << largestNum << "\n";
    cout << "Second Largest: " << secondLargestNum << "\n";
    cout << "Third Largest: " << thirdLargestNum << "\n";
    cout<< largestNum * secondLargestNum * thirdLargestNum;
    return 0;
}
