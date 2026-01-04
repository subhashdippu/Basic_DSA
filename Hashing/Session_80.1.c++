#include<iostream>
using namespace std;

int main(){
    vector<int>arr = {1,2,1};
    int n = arr.size();
    int i = 0;
    int ans = 0;
    while(i<n){
        int j = i;
        unordered_map<int,int>map;
        while(j<n){
            map[arr[j]]++;
            int count = map.size();
            ans += count;
            j++;
        }
        i++;
    }
    cout<<ans;
    return 0;
}