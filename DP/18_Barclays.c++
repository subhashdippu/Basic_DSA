#include<iostream>
using namespace std;

int main(){
    vector<int>a = {0,4,1,4,20,2};
    vector<int>b = {0,2,2,10,21,23};
    int n = a.size()-1;

    int dp_e[10+1];
    int dp_h[11+1];
    int dp_n[11+1];

    dp_e[0] = 0;
    dp_h[0] = 0;
    dp_e[1] = a[1];
    dp_h[1] = b[1];
    dp_n[1] = 0;
    int i =2;
    while(i<=n){
        dp_e[i] = a[i] + max({dp_h[i-1], dp_n[i-1], dp_e[i-1]});
        dp_h[i] = b[i] + dp_n[i-1];
        dp_n[i] = a[i] + max({dp_h[i-1], dp_n[i-1], dp_e[i-1]});
        i++;
    }
    cout<< max({dp_h[n], dp_n[n], dp_e[n]});
    return 0;
}