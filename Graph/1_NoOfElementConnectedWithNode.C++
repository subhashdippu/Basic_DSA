#include<iostream>
#include<vector>
#include<queue>

using namespace std;

vector<vector<int>>g(49);

void solve(){
    for(int i=0;i<5; i++){
        cout<<i<<" "<<g[i].size();
    }
}
int main(){ 
    // cout<<"Enter the size graph: ";
    // cin>>n;
    for(int i=0; i<5-1; i++){
        int x, y;
        cout<<"Enter the x: ";
        cin>>x;
        cout<<"coordinate and y: ";
        cin>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    solve();
    return 0;
}
