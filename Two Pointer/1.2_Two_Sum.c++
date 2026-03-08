// Radha

#include<iostream>
using namespace std;

void solve(vector<int>arr, int n){
    unordered_map<int,int>map;
    int k = 26;
    for(int i=0;i<n;i++){
        if(map.find(k-arr[i]) != map.end()){
            cout<<map[k-arr[i]]<<" "<<i;
        }
        map[arr[i]] = i;
    }
}
int main(){
    vector<int>arr = {2,7,11,15};
    int n = arr.size();
    solve(arr, n);
    return 0;
}