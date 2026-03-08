// 
// Radha

// Radha 

#include<iostream>
using namespace std;

void solve(vector<int>arr, int n){
    int j =0;
    int sum = 0;
    int count = 0;
    int k = 2;
    sort(arr.begin(), arr.end());
    for (int i = 0, j = 0; j < n; j++) {
        sum = arr[j] - arr[i];
        while (sum>k){
            i++;
            sum = sum - arr[i];
            }
            count += (j - i );
    }
    cout<<count;
}
int main(){
    vector<int>arr = {1, 2, 3  };
    int n = arr.size();
    solve(arr,n);
    return 0;
}