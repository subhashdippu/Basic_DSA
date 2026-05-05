// RAdha
#include<iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int n = 3, m = 3;

unordered_map<int,int> mp;
unordered_map<int,int> compSize;
vector<vector<int>> g(400, vector<int>(400, 0));
vector<vector<int>> vis(400, vector<int>(400, 0));

int ComponentNumber = 1;
int c = 0;
int sum = 0;
int totalsum = 0;

void dfs(int i, int j){
    if (i < 0 || j < 0 || i >= n || j >= m || vis[i][j] || g[i][j] == -1) {
        return;
    }

    vis[i][j] = 1;
    c++;
    sum += g[i][j];
    totalsum += g[i][j];
    
    dfs(i, j - 1);
    dfs(i - 1, j); 
    dfs(i, j + 1);
    dfs(i + 1, j);
}

void connectedComponent(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(g[i][j] >= 1 && !vis[i][j]){
                c = 0;
                sum = 0;
                
                dfs(i, j);
                
                mp[ComponentNumber] = sum;
                compSize[ComponentNumber] = c;

                cout<<"Component "<<ComponentNumber
                    <<" size: "<<c
                    <<" sum: "<<sum<<"\n";

                ComponentNumber++;
            }
        }
    }

    cout<<"\n";
    for(auto x: mp){
        cout<<"From component "<<x.first<<" -> "<<totalsum - x.second<<"\n";
    }
    cout<<"\n";
    for(auto y: compSize){
        for(int i=1; i<=y.second; i++){
            cout<<"From Component "<<totalsum * i<<"\n";
        }
    }
}

int main(){
    for(int i=0;i<n; i++){
        for(int j=0;j<m; j++){
            cout << "Enter the m[" << i << "][" << j << "]: ";
            cin>>g[i][j];
        }
    }

    connectedComponent();
    return 0;
}