#include<iostream>
#include<string>
using namespace std;

int main(){
    int metrix[55][55];
    int n= 5;
    for(int i=0;i<n; i++){
        for(int j =0; j<n; j++){
            cout<<"Enter the row: ";
            cin>>metrix[i][j];
        }
        cout<<"\n";
    }
    for(int i=0;i<n; i++){
        for(int j =0; j<n; j++){
            cout<<metrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}