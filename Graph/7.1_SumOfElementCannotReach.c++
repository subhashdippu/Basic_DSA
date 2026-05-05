// RAdha sum of all element form the given element where you can't reach 


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


void noOfConnectedGraph(int node){
    vis[node] = 1;
    cout<<node<<" ";
    c++;
    sum += node;
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
            m[count1] = sum;
            cout<<"-> size of element: "<<c<<" sum of element: "<<sum<<"\n";
            
        }
        c=0;
        sum = 0;
    }
    cout<<"\n";
    int sum1 = 0;
    for(auto x:m){
        sum1 += x.second;
    }
    for(auto x:m){
        cout<<"From component"<<x.first<<" "<<sum1 - x.second<<"\n";
    }
    cout<<count1;
}



int main(){
    int n = 10;
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



