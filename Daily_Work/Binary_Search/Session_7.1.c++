#include<iostream>
#include<vector>
using namespace std;

// TC = 

int maxElement(vector<int>arr){
    int maxNumber = 0;
    for(int i=0;i<arr.size();i++){
        maxNumber = max(arr[i], maxNumber);
    }
    return maxNumber;
}
bool check(int k, vector<int>arr){
    int sum = 0;
    for(int i=0;i<arr.size(); i++){
        if(arr[i]%k == 0){
            sum += arr[i]/k;
        }
        else{
            sum += (arr[i] + 1)/k;
        }
    }
    int maxNumber = maxElement(arr);
    if(sum>maxNumber){
        return false;
    }
    return true;
}
int main(){
    vector<int>arr = {2,4,3};
    int k = 1;
    int maxNumber = maxElement(arr);
    while(k<=maxNumber){
        if(check(k, arr) == false){
            k++;
        }
        else{
            cout<<k;
            break;
        }
    }
    return 0;
}
