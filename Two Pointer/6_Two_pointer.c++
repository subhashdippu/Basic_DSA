// 
// Radha

// Radha 

#include<iostream>
using namespace std;

void solve(vector<int>arr, int n){
    int j =n-1;
    int d = 0;
    int count = 0;
    int k = 5;
    int i = 0;
    while(i<j){
        d = arr[i] + arr[j];
        if(d<=k){
            count += j-i;
            i++;
        }else{

            j--;
        }
    }
        
    cout<<count;
}
int main(){
    vector<int>arr = {1,2,3,4,5,6 };
    int n = arr.size();
    solve(arr,n);
    return 0;
}