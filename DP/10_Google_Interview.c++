#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr = {2,3,5,8,10};
    vector<int>dp_even(arr.size()+1,0);
    vector<int>dp_odd(arr.size()+1,0);
    
    dp_even[0] =  (arr[0]%2==0) ? 1 : 0;
    dp_odd[0] =  (arr[0]%2!=0) ? 1 : 0;

    if(arr[1]%2==0){
        dp_even[1] = dp_even[0];
        dp_odd[1] = dp_odd[0];
    }
    else{
        dp_even[1] = dp_odd[0];
        dp_odd[1] = dp_even[0];
    }

    int i = 2;
    while(i<arr.size()){
        if(arr[i]%2==0){
            dp_even[i] = dp_even[i-1] + dp_even[i-2];
            dp_odd[i] = dp_odd[i-1] + dp_odd[i-2];
        }else{
            dp_odd[i] = dp_even[i-1] + dp_even[i-2];
            dp_even[i] = dp_odd[i-1] + dp_odd[i-2];
        } 
        i++;
    }
    cout<<dp_even[arr.size()-1]<<"\n";
    cout<<dp_odd[arr.size()-1];
    return 0;
}