// Radha

#include<iostream>
using namespace std;

void solve(vector<int>arr, int n){
    int j =0;
    int sum = 0;
    int count = 0;
    int k = 2;
    unordered_map<int,int>map;
    for (int i = 0, j = 0; j < n; j++) {
            map[arr[j]]++;
            int mapSize = map.size();
            while (mapSize>k){
                map[arr[i]]--;
                if(map[arr[i]] == 0){
                    map.erase(arr[i]);
                }
                i++;
                mapSize = map.size();
            }
            count += (j - i + 1);
    }
    cout<<count;
}
int main(){
    vector<int>arr = {1, 2, 3 };
    int n = arr.size();
    solve(arr,n);
    return 0;
}