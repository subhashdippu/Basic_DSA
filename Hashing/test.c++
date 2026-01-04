#include<iostream>

using namespace std;

void solve(vector<int>arr){
    unordered_map<int>map;
    vector<int>pre;
    vector<int>suf;
    int j = 0;
    int n = arr.size();
    while(j<n){
        int count = 0;
        int i = 0;
        while(i<j){
            if(arr[i] > arr[j]){
                count++;
            }
            i++;
        }
        pre[j] = count;
        j++;
    }

    int k = n-1;
    while(j>0){
        int count = 0;
        int i = n-1;
        while(k<i){
            if(arr[k]<arr[i]){
                count++;
            }
            i--;
        }
        suf[k] = count;
        k--;
    }
}

int main(){
    vector<int>arr = {8,12, 11, 10, 5, 15, 20, 21};
    solve(arr);
    return 0;
}