// 
// 
// vector<int>vec;Radha
#include<iostream>
using namespace std;

void solve(string s, int n){
    vector<int>vec(n);
    for(int i=0;i<n; i++){
        if(s[i] == '(' ){
            vec.push_back(s[i]);
        }
        else if(s[i] == ')'){
            if(vec.empty()){
                return 0;
            }
            vec.pop_back()

        }
    }
    if(vec.empty()){
        return 1;
    }
    return 0;
}
int main(){
    string s = "2+4(4-2))(5)";
    int n = s.length();
    solve(s, n);
    return 0;
}