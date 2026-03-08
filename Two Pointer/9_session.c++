// Radha


#include<iostream>
using namespace std;

void solve(string s1, string s2){
    int i = 0;
    int j = 0;
    while(i<s1.length() && j<s2.length()){
        if(s1[i] == s2[j]){
            i++;
            j++;
        }
        else{
            i++;
        } 
    }
    if(j==s2.length() ){
        cout<<"yes";
    }
    else{
        cout<<"No";
    }
}
int main(){
    string s1 = "ramram";
    string s2 = "ram";
    solve(s1, s2);
    return 0;
}