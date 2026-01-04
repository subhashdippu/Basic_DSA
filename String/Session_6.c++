#include<iostream>
using namespace std;

int solve(string s1, string s2, string res){
    string t = s1 + s2;
    sort(t.begin(), t.end());
    sort(res.begin(), res.end());
    for(int i=0;i<t.size(); i++){
        if(t[i] != res[i]){
            return false;
        }
    }
    return true;

}
int main(){
    string s = "xy";
    string t = "15";
    string result = "x1y5";
    int ans = solve(s,t,result);
    cout<<ans;
    return 0;
}


// TC => (nlog n)