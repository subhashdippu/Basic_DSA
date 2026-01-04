#include<iostream>
#include<vector>

using namespace std;

void sortInWave(vector<int> &arr){
    
    int n = arr.size();

    for (int i = 0; i < n - 1; i += 2) {
        swap(arr[i], arr[i + 1]);
    }
}

int main(){
    
    vector<int> arr = {1, 2, 3, 4, 5};
    sortInWave(arr);
    for (int i=0; i<arr.size(); i++)
       cout << arr[i] << " ";
    return 0;
}