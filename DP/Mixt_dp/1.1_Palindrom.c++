#include<iostream>
using namespace std;
void solve(string s, int n){
    int count = 0;
    for(int i=0;i<n; i++){
        for(int j=i; j<n; j++){
            int i1 = i;
            int j1 = j;
            bool flag = true;
            while(i1<j1){
                if(s[i1] != s[j1]){
                    flag = false;
                    break;
                }
                i1++;
                j1--;
            }
            if(flag){
                count++;
            }
        }
    }
    cout<<count;
}
int main(){
    string s = "abc";
    int n = s.size();
    solve(s, n);
    return 0;
}