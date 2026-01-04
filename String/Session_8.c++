#include<iostream>
using namespace std;

int solve(string s){
    int ans =0, count =0;
    for(int i=0;i<s.size(); i++){
        if(s[i] == '0'){
            count++;
        }else{
            count--;
        }
        if(count == 0){
            ans++;
        }
    }
    return ans;
}
int main(){
    string s = "0100110101";
    int ans = 0;
    ans = solve(s);
    cout<<ans;
    return 0;
}