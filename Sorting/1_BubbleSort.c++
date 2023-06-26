#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){// Here we use n-1 because of no: of pases
        bool swaped = false;
        for(int j=0; j<n-1; j++){ // Here j+1 that's why we use n-1
            if(arr[j]>arr[j+1]){
                swaped = true;
                swap(arr[j], arr[j+1]);
            }
        }
        if(!swaped){
            break;
        }
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
        bubbleSort(arr, n);
        display(arr, n);
    }
    return 0;
}