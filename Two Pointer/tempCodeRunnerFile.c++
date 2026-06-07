// Radha
#include<iostream>
using namespace std;

void solve(vector<int>arr1, vector<int>arr2, int n){
    int maxi = 0; 
    int k = 32;
    int i = 0;
    int j = n-1;
    while(i<n || 0>=j){
        if(arr1[i] + arr2[j] <=k ){
            maxi = max(maxi, arr1[i] + arr2[j])
        }
        else if(arr1[i] + arr2[j] > k ){
            j--;
        }
        else{
            i++;
        }
    }
    cout<<maxi;
}
int main(){.           
    vector<int>arr1 = {1, 4, 5, 7};
    vector<int>arr2 = {10, 20, 30, 40};
                                  
    int n = arr1.size();
    solve(arr1, arr2, n);
    return 0;
}
