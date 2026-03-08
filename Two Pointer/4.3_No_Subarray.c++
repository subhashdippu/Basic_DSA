// RAdha
// Radha Longest sub_array whose sum<=k

#include<iostream>
using namespace std;

void solve(vector<int>arr, int n){
    int j =0;
    int sum = 0;
    int longest = 0;
    int k = 4;
    int p = 0;
    for (int i = 0, j = 0; j < n; j++) {
        sum = sum + arr[j];
        while (sum>k){
            sum = sum - arr[i];
            i++;
        }
        longest = (j - i + 1);
        p = max(longest, p);
    }
    cout<<p;
}
int main(){
    vector<int>arr = {1, 2, 3 ,5, 8, 8, 8 ,8 ,2 ,1, 1, 1, 1, 1, 1 };
    int n = arr.size();
    solve(arr,n);
    return 0;
}