#include<iostream>
using namespace std;
int solve(int N){
    int dp[N];
    dp[0] = 0;  
    dp[1] = 1;
    int i = 2;
    while(i<N){
        int v1 = dp[i-1] + 1;
        int v2 = INT_MAX;
        int v3 = INT_MAX;
        if(i%2 == 0){
            dp[i] = dp[i/2] + 1;
        }
        else{
            dp[i] = min(1 + dp[i-1], 2 + dp[(i+1)/2]);
        }
        i++;
    }
    return dp[N-1]; 
}
int main(){
    int N = 15;
    int ans = solve(N);
    cout<<ans;
    return 0;
}


// #include<iostream>
// using namespace std;
// int solve(int N){
//     int dp[N];
//     dp[0] = 0;  
//     dp[1] = 1;
//     int i = 2;
//     while(i<N){
//         int v1 = dp[i-1] + 1;
//         int v2 = INT_MAX;
//         int v3 = INT_MAX;
//         if(i%2 == 0){
//             v2 = dp[i/2] + 1;
//         }
//         if(i%3 == 0){
//             v3 = dp[i/3] + 1;
//         }
        
//         dp[i] = min({v1, v2, v3});
//         i++;
//     }
//     return dp[N-1]; 
// }
// int main(){
//     int N = 15;
//     int ans = solve(N);
//     cout<<ans;
//     return 0;
// }