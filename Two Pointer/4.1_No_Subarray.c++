// Radha 

#include<iostream>
using namespace std;

void solve(vector<int>arr, int n){
    // int j =0;
    int sum = 0;
    int count = 0;
    int k = 4;
    for (int i = 0, j = 0; j < n; j++) {
            sum = sum + arr[j];
            while (sum>k){
                sum = sum - arr[i];
                i++;
            }
            count += (j - i + 1);
    }
    cout<<count;
}
int main(){
    vector<int>arr = {1, 2, 1 ,5, 8, 8, 8 ,8 ,2 ,1, 1, 1, 1, 1, 1 };
    int n = arr.size();
    solve(arr,n);
    return 0;
}