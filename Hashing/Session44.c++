#include<iostream>
#include <vector>
#include <cmath>
using namespace std;

int digit(int digit){
    return to_string(digit).length();
}
int main(){
    vector<int>arr = {0, 3, 14, 15};
    int ans = 0;
    int sum = 0;
    for(int i=1; i<= arr.size()-1; i++){
        int digitCount = digit(arr[i]);
        int v1 = (i - 1) * arr[i] + pow(10, digitCount) * sum;
        ans += v1;
        sum += arr[i];
    }
    cout<<ans;
    return 0;
}

