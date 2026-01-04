#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1, 1, 1, 1, 1};

    int low = 0;
    int high = arr.size() - 1;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] == 1){
            if(mid == 0 || arr[mid - 1] == 0){
                cout<<mid;
                break;
            }
            else{
                high = mid - 1;
            }
        }
        else{
            if(arr[mid] == 0){
                low = mid + 1;
            }
        }
    }
    return 0;
}