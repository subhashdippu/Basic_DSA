#include<iostream>
#include<vector>
#include<queue>
using namespace std;
const int N = 1e5+10;
vector<int> g[N];
int vis[N];
void dfs(int vertex){
    cout << vertex << endl;
    vis [vertex] = true;
    for(int child : g[vertex]){
        if(vis [child]) continue;
        dfs(child);
    }
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
    dfs(1);
    // for(int i = 1; i<=n; ++i){
    //     cout<<i<<": "<< level[i]<<endl;
    // }
    return 0;
}
