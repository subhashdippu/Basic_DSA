#include<iostream>
#include <vector>
#include <set>
#include <unordered_map>
using namespace std;
vector<int>g[400];
vector<int>vis(400);
int count1 = 0;
int c = 0;

void bfs(){
    vector<int>vis(400);
    queue<int>q;
    vector<int>level(200);
    vis[1] = 1;
    level[1] = 1;
    q.push(1);
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        cout<<cur<<" "<<level[cur]<<"\n";
        for(auto x: g[cur]){
            if(!vis[x]){
                level[x] = level[cur] + 1;
                vis[x] = 1;
                q.push(x);
            }
        }
    }
}

void connectedElement(){
    // for(int i=0;i<8; i++){
    //     for(auto x: g[i]){
    //         cout<<i<<" "<<x<<" ";
    //     }
    //     cout<<"\n";
    // }
    for(int i=0;i<8; i++){
        cout<<i<<" "<<g[i].size()<<"\n";
    }
}

void dfs(int node){
    vis[node] = 1;
    cout<<node<<" ";
    for(auto x: g[node]){
        if(!vis[x]){
            dfs(x);
        }
    }
}

void noOfConnectedGraph(int node){
    vis[node] = 1;
    cout<<node<<" ";
    c++;
    for(auto x: g[node]){
        if(!vis[x]){
            noOfConnectedGraph(x);
        }
    }
}

void connectedComponent(){
    for(int i =1; i<=9; i++){
        if(!vis[i]){
            noOfConnectedGraph(i);
            count1++;
            cout<<c<<"\n";
        }
        c=0;
    }
    cout<<"\n";
    cout<<count1;
}

vector<set<int>>k(200);
unordered_map<int, int>componentElement;
int cn = 1;

void ArrangeComponent(int node){
    vis[node] = 1;
    k[cn].insert(node);
    componentElement[node] = cn;
    for(auto x: g[node]){
        if(!vis[x]){
            ArrangeComponent(x);
        }
    }
}

void solve(){
    int q;
    cout<<"Enter the no: of query: ";
    cin>>q;
    for(int i=0;i<q; i++){
        int type, value;
        cout<<"Enter the type: ";
        cin>>type;
        cout<<"Enter the value: ";
        cin>>value;
        if(type == 1){
            int a = componentElement[value];
            if(k[a].size() == 0){
                cout<<"-1"<<"\n";
            }
            else{
                if(k[a].find(value) == k[a].end()){
                    auto g1 = k[a].begin();
                    cout<<(*g1);
                }
                else{
                    cout<<value;
                }
            }
            cout<<"\n";
        }
        if(type == 2){
            int b = componentElement[value];
            if(k[b].size() == 0){
                cout<<"-1";
            }
            else{
                if(k[b].find(value) != k[b].end()){
                    k[b].erase(k[b].find(value));
                }
            }
        }
    }
}

int main(){
    int n = 6;
    int x, y;
    for(int i=0;i<n; i++){
        cout<<"Enter the x: ";
        cin>>x;
        cout<<"Enter the y: ";
        cin>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    // bfs();
    // connectedElement();
    // dfs(1);
    // connectedComponent()
    for(int i=1;i<n; i++){
        if(!vis[i]){
            ArrangeComponent(i);
            cn++;
        }
    }
    solve();
    
    return 0;
}



