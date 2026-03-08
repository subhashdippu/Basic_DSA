// Radha
#include<iostream>
using namespace std;

void solve(vector<int>arr1, vector<int>arr2, int n){
    int i = 0; 
    int j = n-1;
    int x = 32;
    int sum = 0;
    int cur = 0;
    while(i<n && j>=0){
        cur = arr1[i] + arr2[j];
        if(cur <= x){
            sum = max(arr1[i] + arr2[j], sum);
        }
        if(cur < x){
            i++;
        }
        else{
            j--;
        }
    }
    cout<<sum;
}
int main(){
    vector<int>arr1 = {1, 4, 5, 7};
    vector<int>arr2 = {10, 20, 30, 40};
    int n = arr1.size();
    solve(arr1, arr2, n);
    return 0;
}
