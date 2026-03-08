// Radha
#include<iostream>
using namespace std;

void solve(vector<int>arr, int n){
    vector<int>vec(10);
    int i = 0;
    int j = n-1;
    int k = n-1;
    while(i<j){
        if(abs(arr[i])<abs(arr[j])){
            vec[k] = arr[j] * arr[j];
            j--;
            k--;
        }
        else{
            vec[k] = arr[i] * arr[i];
            i++;
            k--;
        }
    }
    for(int i = 0;i<n; i++){
        cout<<vec[i]<<" ";
    }
}
int main(){
    vector<int>arr = {-4,-1,0,3,10};
    int n = arr.size();
    solve(arr,n);
    return 0;
}