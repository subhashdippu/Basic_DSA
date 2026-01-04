#include<iostream>
#include<vector>
using namespace std;
void reverseString(vector<char>& s) {
    int i =0;
    int j = s.size()-1;
    while(i<j){
        swap(s[i], s[j]);
        i++;
        j--;
    }
}
void printString(vector<char>s){
    for(int i=0;i<s.size(); i++){
        cout<<s[i];
    }
    cout<<"\n";
}
int main(){
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    printString(s);
    reverseString(s);
    printString(s);
    return 0;
}