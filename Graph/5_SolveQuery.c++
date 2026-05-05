#include<iostream>
#include <vector>
#include <set>
#include <unordered_map>
using namespace std;
vector<int>g[400];
vector<int>vis(400);
int count1 = 0;
int c = 0;

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
    for(int i=1;i<n; i++){
        if(!vis[i]){
            ArrangeComponent(i);
            cn++;
        }
    }
    solve();
    
    return 0;
}



