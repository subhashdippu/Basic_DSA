#include<iostream>
#include<vector>
#include <algorithm>
#include<unordered_map>
using namespace std;

int main(){
    vector<int>arr = {2,5,8,1,10};
    unordered_map<int,int>suf;
    for(int i=arr.size()-2;i>=0; i--){
        suf[i] = max(suf[i-1], arr[i]);
    }
    int pre = arr[0];
    for(int i=1;i<arr.size()-2; i++){
        if(pre <arr[i] && arr[i]<suf[i+1]){
            cout<<"True";
            break;
        }
        pre = min(pre, arr[i]);
    }
    return 0;
}