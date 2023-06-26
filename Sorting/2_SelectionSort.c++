#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        if(min!=i){
            swap(arr[i], arr[min]);
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
        SelectionSort(arr, n);
        display(arr, n);
    }
    return 0;
}