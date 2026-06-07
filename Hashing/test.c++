// Radha 

#include<iostream>
#include <vector>
#include <unordered_map>
// #include <algorithm>
using namespace std;

vector<string> solve(vector<string>arr){

    vector<int>ans(26, INT_MAX);
    vector<string>res;

    for(auto s: arr){
        vector<int>stringCount(26, 0);
        for(auto x: s){
            stringCount[x - 'a']++;
        }
        for(int i =0; i<26; i++){
            ans[i] = min(ans[i], stringCount[i]);
        }
    }
    for(int i=0;i<26; i++){
        for(int j=0;j<ans[i]; j++){
            res.push_back(string(1, i + 'a'));
        }
    }
    return res;
} 

int main(){
    vector<string> arr = {"bella", "label", "roller"};
    vector<string> ans1 = solve(arr);
    for(int i=0;i<ans1.size(); i++){
        cout<<ans1[i]<<" ";
    }
    return 0;
}