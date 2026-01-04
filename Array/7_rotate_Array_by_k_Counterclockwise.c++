#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {
    vector<int> arr = {4, 23, 5, 3, 32, 51, 56, 3, 54, 89};
    int k = 4;
    int i =0;
    while(i<k){
        swap(arr[i], arr[k]);
        i++;
        k--;
    }
    for(int i=0;i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
