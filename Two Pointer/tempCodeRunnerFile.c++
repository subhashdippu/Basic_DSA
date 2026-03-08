// Radha
#include<iostream>
using namespace std;

void solve(vector<int> arr, int n){
    int i = 0; 
    int k = 4;
    int j = 0;
    int cur_sum = 0;
    int count = 0;
    while(i<n){
        cur_sum += arr[j];
        if(cur_sum > k){
            while(cur_sum>k){
                cur_sum = cur_sum - arr[i];
                i++;
            }
        }
        
        count += j - i + 1;
        j++;
    }
    cout<<count;
}
int main(){
 vector<int>arr = {1, 2, 3 ,5, 8, 8, 8 ,8 ,2 ,1, 1, 1, 1, 1, 1 };
       int n = arr.size();
    solve(arr, n);
    return 0;
}
