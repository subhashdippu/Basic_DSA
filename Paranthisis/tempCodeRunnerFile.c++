#include<iostream>
#include<vector>
// #include<string>
using namespace std;
int match(char a, char b){
    if(a == '(' && b == ')') return 1;
    if(a == '{' && b == '}') return 1;
    if(a == '[' && b == ']') return 1;
    return 0;
}
int parentheses(string s){
    vector<int>vec;
    int n = s.length();
    for(int i=0; i<n; i++){
        if(s[i] == '(' or s[i] == '{' or s[i] == '['){
            vec.push_back(s[i]);
        }
        else if(s[i] == '(' or s[i] == '{' or s[i] == '['){
            if(vec.empty()){
                return 0;
            }
            if(!match(vec.back(), s[i])){
                return 0;
            }
            vec.pop_back();
        }
    }
    if(vec.empty()){
        return 1;
    }
    return 0;
}
int main(){
    string s = "4 * [(((9))3))]{}";
    int a = parentheses(s);
    cout<<a<<" ";
    return 0;
}