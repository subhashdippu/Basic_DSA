// Radha

#include<iostream>
using namespace std;

void solve(vector<int>arr, int n){
    int j =0;
    int sum = 0;
    int count = 0;
    int k = 2;
    for (int i = 0; i < n; i++) {
        unordered_map<int,int>map;
        for(int j = i; j<n; j++){
            map[arr[j]]++;
            if(map.size() <= k){
                count++;
            }
        }
    }
    cout<<count;
}
int main(){
    vector<int>arr = {1, 2, 3 };
    int n = arr.size();
    solve(arr,n);
    return 0;
}