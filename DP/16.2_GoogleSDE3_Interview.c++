// Radha
#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>a, vector<int>b, vector<int>c, int n, int m){
    vector<int>dpa(n+5,0);
    vector<int>dpb(m+5,0);
    vector<int>dpc(m+5,0);
    dpa[0] = a[0];
    dpb[0] = b[0];
    dpa[1] = max({dpa[0] + a[1], b[1], c[1]});
    dpb[1] = max({dpb[0] + b[1], a[1], c[1]});
    dpc[1] = max({dpc[0] + c[1], b[1], c[1]});
    int i = 2;

    while(i<n){
        dpa[i] = max({dpa[i-1] + a[i], dpb[i-2] + a[i], dpc[i-1] + a[i]});
        dpb[i] = max({dpb[i-1] + b[i], dpa[i-2] + b[i], dpc[i-2] + b[i]});
        dpc[i] = max({dpc[i-1] + c[i], dpa[i-2] + c[i], dpb[i-2] + c[i]});
        i++;
    }
    cout<<dpa[n-1]<<" "<<dpb[n-1];
}
int main(){
    vector<int>a = {25, 10, 15, 10, 70 };
    vector<int>b = {5, 5, 50, 5, 30};
    vector<int>c = {5, 5, 50, 5, 30};
    int n = a.size();
    int m = a.size();
    solve(a,b,c, n,m);
    return 0;
}