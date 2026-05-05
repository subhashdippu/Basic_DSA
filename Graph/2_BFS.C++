#include<iostream>
#include<vector>
#include<queue>
using namespace std;
const int N = 1e5+10;
vector<int> g[N];
int vis[N];
// int level[N];
void BFS(int source){
    queue<int>q;
    q.push(source);
    vis[source] = 1;
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        cout<<cur<<" ";          
        for(int child : g[cur]){
            if(!vis[child]){
                q.push(child);
                vis[child] = 1;
                // level[child] = level[cur] + 1;
            }
        }
    }
    cout<<endl;
}
int main(){
    int n; 
    cout<<"Enter the size graph: ";
    cin>>n;
    for(int i=0; i<n-1; i++){
        int x,y;
        cout<<"Enter the x coordinate and y coordinate: ";
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    BFS(1);
    // for(int i = 1; i<=n; ++i){
    //     cout<<i<<": "<< level[i]<<endl;
    // }
    return 0;
}