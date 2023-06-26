#include <iostream>
#include<vector>
using namespace std;

int parentheses(string s){
    int n = s.length();
    vector<int>vec;
    for(int i=0; i<n; i++){
        if(s[i]=='('){
            vec.push_back('(');
        }
        else if(s[i]==')'){
            if(vec.empty()){
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
    string s = "2+4(4-2))(5)";
    int a = parentheses(s);
    cout<<a<<" ";
    return 0;
}