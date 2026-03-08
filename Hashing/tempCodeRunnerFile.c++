#include<iostream>
using namespace std;
void solve(vector<int>vec, int n){
    unordered_map<int,int>map;
    for(int i=0; i<n; i++){
        if(map.find(arr[i]) != map.end()){
            cout<<"Pair is available";
            break;
        }
        map[arr[i]]++;
    }
}
int main(){
    vector<int>arr = {1, 3, 2, 5, 2, 3, 5, 5, 1, 0};
    int n = arr.size();
    solve(arr, n);
    return 0;
}