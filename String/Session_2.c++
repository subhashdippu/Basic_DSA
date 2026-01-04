#include<iostream>
using namespace std;

bool isPalindrom(string s){
    int i =0;
    int j = s.size() - 1;
    while(i<j){
        if(s[i] != s[j]){
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
int main(){
    string s = "acsa";
    cout<<isPalindrom(s);
    return 0;
}