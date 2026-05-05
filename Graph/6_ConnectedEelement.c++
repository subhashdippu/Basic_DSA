// RAdha
#include <iostream>
using namespace std;
vector<vector<int>>g(500);
int vis[500] = {0};
int c = 0;
void dfs(int root){
    cout<<root<<" ";
    c++;
    vis[root] = 1;
    for(auto cur:g[root]){
        if(!vis[cur]){
            dfs(cur);
        }
    }
}
int main(){
    int n, m, x,y;
    cout<<"Enter the N: ";
    cin>>n;
    cout<<"Enter the M: ";
    cin>>m;
    for(int i=0;i<m; i++){
        cout<<"Enter the x: ";
        cin>>x;
        cout<<"Enter the y: ";
        cin>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
   

    return 0;
}