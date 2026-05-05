// RAdha how many element from the given element where you can't reach 


#include<iostream>
#include <vector>
#include <set>
#include <unordered_map>
using namespace std;
unordered_map<int,int>m;
vector<int>g[400];
vector<int>vis(400);
int count1 = 0;
int c = 0;
int sum = 0;
int totalSize = 0;

void noOfConnectedGraph(int node){
    vis[node] = 1;
    cout<<node<<" ";
    c++;
    sum += node;

    totalSize++;
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
            m[count1] = c;
            cout<<"-> size of element: "<<c<<" sum of element: "<<sum<<"\n";
            
        }
        sum = 0;
        c=0;
    }
    cout<<"\n";
    for(auto x:m){
        cout<<"From component "<<x.first<<" "<<totalSize - x.second<<"\n";
    }
    cout<<count1;
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

 
    connectedComponent();

    return 0;
}



