#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<string>ans;
unordered_map<string, int>map;

int parentheses(string s){
    int n = s.length();
    vector<int>vec;
    for(int i=0; i<n; i++){
        if(s[i]=='('){
            vec.push_back('(');
        }
        else if(s[i]==')'){
            if(vec.size()>0 && vec.back()=='('){
                vec.pop_back();
            }
            else{
                vec.push_back(')');
            }
            
        }
    }
    return vec.size();

}
void solve(string s, int mincount){
    if(map[s] != 0){
        return;
    }
    else{
        map[s]++;
    }
    if(mincount<0){
        return;
    }
    if(mincount==0){
        if(!parentheses(s)){
            ans.push_back(s);
        }
        
        return;
    }
    for(int i=0; i<s.size(); i++){
        string left = s.substr(0,i);
        string right = s.substr(i+1, s.size());
        solve(left+right, mincount-1);
    }
}
int main(){
    string s = "()())()";
    int a = parentheses(s);
    solve(s, parentheses(s));
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}