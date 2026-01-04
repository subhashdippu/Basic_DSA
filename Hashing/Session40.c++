
// #include<iostream>
// #include<unordered_map>
// using namespace std;

// int main(){
//     vector<int>arr = {5,8,5,1,1,10};
//     unordered_map<int, int>map;
//     int k = 15;
//     for(int i=0; i<arr.size(); i++){
        
//         if(map.find(arr[i]) != map.end()){
//             continue;
//         }
//         else{map[arr[i]] = i;}
//     }
//     for(int i=arr.size()-1; i>=0; i--){
//         if(map.find(k - arr[i]) != map.end()){
//             cout << i - map[k - arr[i]] << endl;
//             break;
//         }
//     }
//     return 0;
// }

// #include<iostream>
// #include<unordered_map>
// using namespace std;

// int main(){
//     vector<int>arr = {5,8,8,1,1,10};
//     unordered_map<int, int>map;
//     int k = 15;
//     for(int i=0; i<arr.size(); i++){
//         map[arr[i]] = i;
//     }
//     for(int i=arr.size()-1; i>=0; i--){
//         if(map.find(k - arr[i]) != map.end()){
//             cout << i - map[k - arr[i]] << endl;
//             break;
//         }
//     }
//     return 0;
// }