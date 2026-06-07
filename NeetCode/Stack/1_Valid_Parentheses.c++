// Radha


#include<iostream>
#include<stack>
using namespace std;

int validParenthese(string s, int n){
        stack<char>st;
        for(int i=0;i<n; i++){
            if(s[i] == '('){
                st.push(')');
            }
            else if(s[i] == '{'){
                st.push('}');
            }
            else if(s[i] == '['){
                st.push(']');
            }
            else{
                if(st.empty() || s[i] != st.top()){
                    return 0;
                }
                st.pop();
            }
        }
        return st.empty();
        
    

}

int main(){
    string s = "()]{}";
    int n = s.size();
    int ans = validParenthese(s, n);
    cout<<ans;
    return 0;
}