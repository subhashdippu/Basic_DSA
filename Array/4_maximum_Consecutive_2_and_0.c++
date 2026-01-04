#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {
    vector<int> arr = {1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1};

    int maxZero = 1;
    int maxOne = 0;
    int curZero = 0;
    int curOne = 0;

    for (int i = 1; i <= arr.size()-1; i++) {
        if(arr[i] == 0){
            curZero++;
            curOne = 0;
        }
        else {
            curOne++;
            curZero = 0;
        }
        maxZero = max(maxZero, curZero);
        maxOne = max(maxOne, curOne);
    }

    cout << "Max One: " << maxOne << "\n";
    cout << "Max Zero: " << maxZero << "\n";

    return 0;
}
