// Radha
#include<iostream>
using namespace std;
bool containDublicate(vector<int>arr, int n){
    unordered_map<int,int>map;
    for(int i=0;i<n;i++){
        map[arr[i]]++;
    }
    if(map.size() == n){
        return false;
    }
    return true;
}
int main(){
    vector<int>arr = {1,2,3};
    int n = arr.size();
    int ans = containDublicate(arr, n);
    cout<<ans;
    return 0;
}