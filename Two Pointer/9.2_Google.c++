// Radha
// Radha

// #include<iostream>
// using namespace std;

// bool solve(string s1, string s2){
//     int i = 0;
//     int j = 0;
//     while(i<s1.length() && j<s2.length()){
//         if(s1[i] == s2[j]){
//             i++;
//             j++;
//         }
//         else{
//             i++;
//         } 
//     }
//     if(j==s2.length()){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int main(){
//     string s1 = "ramram";
//     string s2 = "ram";
//     int ans = 0;
//     for(int i=1; i<s2.size(); i++){
//         for(char c = 'a'; c<='z'; c++){
//             string s4 = s2;
//             s4[i] = c;
//             if(solve(s1,s4)){
//                 ans++;
//             }
//         }
//     }
//     cout<<ans;
//     return 0;
// }


// Radha
// Radha

#include<iostream>
using namespace std;

bool solve(string s1, string s2){
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
    if(j==s2.length()){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    string s1 = "ramram";
    string s2 = "ram";
    int ans = 0;
    for(int i=1; i<s2.size(); i++){
        for(char c = 'a'; c<='z'; c++){
            string s4 = s2;
            s4[i] = c;
            if(solve(s1,s4)){
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}
