#include <iostream>
#include <vector>
#include <climits>
using namespace std;

pair<int,int> solve(vector<int> arr1,vector<int> arr2, int n){
    vector<int>Adp_even(n + 5);
    vector<int>Adp_odd(n+5);
    vector<int>Bdp_even(n + 5);
    vector<int>Bdp_odd(n+5);

    dp_even[0] = (arr[0]%2==0) ? 1:0;
    dp_odd[0] = (arr[0]%2!=0) ? 1:0;

    if(arr[1]%2==0){
        dp_even[1] = dp_even[0];
        dp_odd[1] = dp_odd[0];
    }
    else{
        dp_even[1] = dp_odd[0];
        dp_odd[1] = dp_even[0];
    }
    for(int i=2;i<n;i++){
        if(arr[i]%2==0){
            dp_even[i] = dp_even[i-1] + dp_even[i-2];
            dp_odd[i] = dp_odd[i-1] + dp_odd[i-2];
        }
        else{
            dp_even[i] = dp_odd[i-1] + dp_odd[i-2];
            dp_odd[i] = dp_even[i-1] + dp_even[i-2];
        }
    }
    return {dp_even[n-1], dp_odd[n-1]};
}

int main(){
    // vector<int> arr= {2,3,5,8,10};
    vector<int> arr1 = {2, 5, 2, 54, 67, 56, 4545};
    vector<int> arr2 = {21, 25, 211, 5, 7, 5, 45};
    int n = arr.size();
    pair<int, int>p;
    p = solve(arr1,arr2 n);
    cout << p.first<<" "<<p.second;
    return 0;
}
