#include<iostream>
using namespace std;

int solve(string s, string t){
    unordered_map<int, int>map1;
    unordered_map<int, int>map2;
    int total = INT_MAX;
    for(int i=0;i<s.size(); i++){
        map1[s[i]]++;
    }
    for(int i=0;i<t.size(); i++){
        map2[t[i]]++;
    }
    for(char i = 'a'; i<='z'; i++){
        if(map1[i] == 0 && map2[i] != 0){
            return 0;
        }
        if(map1[i] != 0 && map2[i] != 0){
            total = min(total, map1[i] / map2[i]);
        }
    }
    return total;
}
int main(){
    string s = "abacbc";
    string t = "bca";
    int ans = solve(s,t);
    cout<<ans;
    return 0;
}