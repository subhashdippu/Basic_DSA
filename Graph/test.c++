#include<iostream>
using namespace std;
vector<vector<int>>g(500);

// void No_Connected_Node(int n){
//     for(int i=1;i<=n; i++){
//         cout<<i<<g[i].size()<<"\n";
//     }
// }

// void No_Of_Node_Connected_With_Current_Node(int n){
//     for(int i= 1;i<=n; i++){
//         cout<<i;
//         for(auto x : g[i]){
//             cout<<" "<<x;
//         }
//         cout<<"\n";
//     }
// }

// void bfs(int node){
//     queue<int>q;
//     vector<int>vis(400);
//     vis[node] = 1;
//     q.push(node);
//     while(!q.empty()){
//         int a = q.front();
//         cout<<a<<" ";
//         q.pop();
//         for(auto x: g[a]){
//             if(!vis[x]){
//                 vis[x] = 1;
//                 q.push(x);
//             }
//         }
//     }
// }

// void bfs_with_level(int node){
//     queue<int>q;
//     vector<int>vis(400);
//     vector<int>level(400);
//     vis[node] = 1;
//     q.push(node);
//     level[node] = 1;
//     while(!q.empty()){
//         int a = q.front();
//         cout<<a<<" "<<level[a]<<"\n";
//         q.pop();
//         for(auto x: g[a]){
//             if(!vis[x]){
//                 vis[x] = 1;
//                 q.push(x);
//                 level[x] = level[a] + 1;
//             }
//         }
//     }
// }

void dfs(int node){
    vector<int>vis(500);
    vis[node] = 1;
    for(auto x: g[node]){
        if(!vis[x]){
            dfs(node);
        }
    }
}

int main(){
    int n, m, x, y;
    cout<<"Enter the no: of node: ";
    cin>>n;
    cout<<"Enter the no: of edge: ";
    cin>>m;
    for(int i=0;i<m; i++){
        cout<<"Enter the x: ";
        cin>>x;
        cout<<"Enter the y: ";
        cin>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    // No_Connected_Node(n);
    // No_Of_Node_Connected_With_Current_Node(n);
    // bfs(1);
    // bfs_with_level(1);
    dfs(1);
    return 0;

}








// graph
// 1 - print no: of node connected with the current node        -> done
// 2 - Print no: of elememnt connected with the current node
// 3 - bfs
// 4 - dfs