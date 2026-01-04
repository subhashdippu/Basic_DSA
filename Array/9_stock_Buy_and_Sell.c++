#include<iostream>
using namespace std;

int main(){
    vector<int>arr = {7,10,1,3,6,9,2};
    int n = arr.size();
    int dp = arr[0];
    int maxProfit = 0;
    for(int i=1; i<n; i++){
        dp = min(dp, arr[i]);
        maxProfit = max(maxProfit, arr[i] - dp);
    } 
    cout<<maxProfit;
    return 0;
}