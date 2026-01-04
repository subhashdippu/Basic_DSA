#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>&arr){
    int k = 3;
    for(int i=0;i<arr.size(); i+=k){
        int l = i;
        int r = k-1;
        while(l<r){
            swap(arr[l], arr[r]);
            l++;
            r--;
        }
        k = k*2;
        if(k > arr.size() - 1){
            k = arr.size() - 1;
        }
        // l = k;
    }

}
void display(vector<int>arr, int n){
    for(int i=0;i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    vector<int>arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = arr.size();
    display(arr, n);
    solve(arr);
    display(arr, n);
    return 0;
}