#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    vector<int>arr = {15, 12, 18};
    int k = 3;
    int n = arr.size();
    unordered_map<int,int>map;

    int sum = 0;
    for(int i=1;i<=n;i++){
        // ll g = k - (arr[i]%k) ;
        // if(map.find(k-(arr[i]%k)%k) != map.end()){
        //     count += map[k-arr[i]%k];
        // // }
        // map[arr[i]%k]++;
        int g = k-arr[i]%k;
        g = g%k ; 
        // explaination why this g = g%k ; 

        sum = sum + map[g] ;
        map[arr[i]%k]=map[arr[i]%k]+1;
    }
    cout<<sum;
    return 0;
}