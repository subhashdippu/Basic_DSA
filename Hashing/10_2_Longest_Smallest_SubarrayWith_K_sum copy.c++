// Radha 

#include<iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve(vector<int>arr, int n){
    int k = 5;
    unordered_map<int, int>map1;
    unordered_map<int, int>map2;
    int count  = 0;
    int cur = 0;
    int largest = INT_MIN; 
    int smallest = INT_MAX;

    for(int i=0;i<n; i++){
        if(map1.find(arr[i] - k) != map1.end()){
            largest = max(largest, i - map1[arr[i] - k]);
        }

        if(map1.find(arr[i]) == map1.end()){
            map1[arr[i]] = i;
        }
        if(map2.find(arr[i] - k) != map2.end()){
            smallest = min(smallest, i - map2[arr[i] - k]);
        }
        map2[arr[i]] = i;
      
    }
    cout<<"Enter the largest: "<<largest<<"\n";
    cout<<"Enter the smallest: "<<smallest;
}
int main(){
    vector<int>arr = {3, 9, -2, 4, 1, -7, 2, 6, -5, 8, -3, -7, 6, 2, 1};
    int n = arr.size();
    solve(arr, n);
    return 0;
}