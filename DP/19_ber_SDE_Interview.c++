// Radha
#include<iostream>
using namespace std;

void solve(vector<int>a, vector<int>b, int n){
    vector<int>dpa_even(299);
    vector<int>dpa_odd(299);
    vector<int>dpb_even(299);
    vector<int>dpb_odd(299);
    int i = 1;
    dpa_even[0] =  (a[0]%2==0) ? 1 : 0;
    dpb_even[0] =  (b[0]%2==0) ? 1 : 0;
    dpa_odd[0] =  (a[0]%2!=0) ? 1 : 0;
    dpb_odd[0] =  (a[0]%2!=0) ? 1 : 0;
    while(i<n){
        if(a[i]%2==0){
            dpa_even[i] = dpa_even[i-1] + dpb_even[i-1];
            dpa_odd[i] = dpa_odd[i-1] + dpb_odd[i-1];
        }
        else{
            dpa_even[i] = dpa_odd[i-1] + dpb_odd[i-1];
            dpa_odd[i] = dpa_even[i-1] + dpb_even[i-1];
        }
         if(b[i]%2==0){
            dpb_even[i] = dpa_even[i-1] + dpb_even[i-1];
            dpb_odd[i] = dpa_odd[i-1] + dpb_odd[i-1];
        }
        else{
            dpb_even[i] = dpa_odd[i-1] + dpb_odd[i-1];
            dpb_odd[i] = dpa_even[i-1] + dpb_even[i-1];
        }
        i++;
    }
    cout<<"No: of even: "<<dpa_even[n-1] + dpb_even[n-1]<<"\n";
    cout<<"No: of odd: "<<dpa_odd[n-1] + dpb_odd[n-1]<<"\n";
}
int main(){
    vector<int>a = {1,2,1};
    vector<int>b = {3,1,1};
    int n = a.size();
    solve(a,b,n);
    return 0;   
}