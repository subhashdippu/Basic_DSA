#include<iostream>
using namespace std;

int solve(string s1, string s2){
    string t = s1 + s1;
    int i = 0;
    int k = 0;
    int count  = 0;
    while(i<t.size()){
        if(t[i] == s2[k]){
            count++;
        
            k++;
        }
        i++;
    }

    // if(count == s2.size()){
    //     return true;
    // }if (t.find(s2) != string::npos)
    return t.find(s2) != string::npos;
// if (t.find(s2) != string::npos)

//     return false;
}
int main(){
    string s = "abacbc";
    string t = "bca";
    int ans = solve(s,t);
    cout<<ans;
    return 0;
}