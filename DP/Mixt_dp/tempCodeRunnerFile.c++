#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
int dp[500][500];
void solve(vector<int>arr, int n){
    int j = 0; 
    int sum = 0;
    int count = 0;
    int k = 2;
    for(int i= 0; i<n; i++){

        for(int j = 0;i<n; j++){
            map[arr[j]]++;
            if(map.size() <=k){
                count++;
            }
        }
    }
}

int main() {
    vector<int>arr = {1, 2, 1 ,5, 8, 8, 8 ,8 ,2 ,1, 1, 1, 1, 1, 1 };
    int n = arr.size();
    solve(arr,n);
    return 0;
}
