// Radha

// RAdha Longest Subarray all the no: are distinct


#include<iostream>
using namespace std;

void solve(vector<int>arr, int n){
    int l = 0;
    for(int i=0;i<n; i++){
        unordered_map<int, int>map;
        for(int j =i; j<n; j++){
            map[arr[j]]++;
            if(map.size() == j-i+1){
                // map[arr[j]]++;
                l = max(l, j-i+1);
            }
            // else{
            //     break;
            // }
        }
    }
}
int main(){
    vector<int>arr = {1, 2, 3 ,5, 8, 8, 8 ,8 ,2 ,1, 1, 1, 1, 1, 1 };
    int n = arr.size();
    solve(arr,n);
    return 0;
}