#include<iostream>
#include<vector>
#include<queue>

using namespace std;

void solve(vector<vector<int>>g){
    int source = 1;
    vector<int>visited(17,0);
    queue<int>q;
    visited[source] = 1;
    q.push(source);
    vector<int>level(n+5);
    level[source] = 0;
    while(!q.empty()){
        int cur = q.front();
        cout<<cur<<" "<<level[cur]<<"\n";
        q.pop();

        for(auto e: g[cur]){
            if(!visited[e]){
                visited[e] = 1;
                q.push(e);
                level[e] = level[cur] + 1;
            }
        }
    }
}
int main(){ 

    int m = 8;
    int n = 10;
    vector<vector<int>>g(n+8);
    for(int i = 1; i<=m; i++){
        int x, y;
        cout<<"Enter x: ";
        cin>>x;
        cout<<"Enter y: ";
        cin>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    solve(g);
    return 0;
}

// #include<iostream>
// using namespace std;

// void dfs(int node, vector<int>vec, vector<int>visited){
//     cout<<node<<" ";
//     visited[node] = true;
//     for(auto x : g[node]){
//         if(!visited){
//             visited = true;
//             dfs(node, vec, visited);
//         }
//     }
// }
// int main(){
//     int n = 10;
//     int m = 8;
//     vector<int>g[200];
//     for(int i=0;i<m; i++){
//         int x,y;
//         cout<<"Enter x: ";
//         cin>>x;
//         cout<<"Enter y: ";
//         cin>>y;
//         g[x].push_back(y);
//         g[y].push_back(x);
//     }
//     vector<int>visited(n);
//     int node = 1;
//     dfs(node, g, visited);
//     return 0;
// }