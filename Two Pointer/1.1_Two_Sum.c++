// Radha
#include<iostream>
using namespace std;

void solve(vector<int>arr, int n){
    int t = 26;
    vector<pair<int, int>>vec;
    for(int i=0;i<n; i++){
        vec.push_back({arr[i], i});
    }
    sort(vec.begin(), vec.end());
    pair<int, int>p;
    int i = 0;
    int j = n-1;
    bool flag = 0;
    while(i<j){
        if(vec[i].first + vec[j].first == t){
            p = {vec[i].second, vec[j].second};
            flag = 1;
            break;
        }
        if(vec[i].first + vec[j].first < t){
            i++;
        }
        else{
            j--;
        }
    }
    if(flag){
        cout<<p.first<<" "<<p.second;
    }else{
        cout<<"No pair";
    }

}
int main(){
    vector<int>arr = {2,7,11,15};
    int n = arr.size();
    solve(arr, n);
    return 0;
}