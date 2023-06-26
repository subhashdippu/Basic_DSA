#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && temp<arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    int t;
    cout<<"Enter the no: of test case: ";
    cin>>t;
    while(t--){
        int n;
        cout<<"Enter the size of array: ";
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cout<<"Enter the element ";
            cin>>arr[i];
        }
        display(arr, n);
        InsertionSort(arr, n);
        display(arr, n);
    }
    return 0;
}