#include<iostream>
using namespace std;

int main(){
   int matrix[400][400];
   int mat[400][400];
   int n = 3;
   for(int i=0;i<n; i++){
      for(int j=0; j<n; j++){
         cout<<"Enter the row: ";
         cin>>matrix[i][j];
      }
      cout<<"\n";
   }

   for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
         cout<<matrix[i][j]<<" ";
      }
      cout<<"\n";
   }
   for(int i=0;i<n; i++){
      for(int j=0; j<n; j++){
         matrix[i][j] = matrix[i-1][j] + matrix[i][j-1] + matrix[i][j] - matrix[i-1][j-1];
      }
   }
   cout<<"\n";
   for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
         cout<<matrix[i][j]<<" ";
      }
      cout<<"\n";
   }

   return 0;
}