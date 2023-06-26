#include <iostream>
using namespace std;

void merge(int arr[], int low, int high, int mid){
    int i = low;
    int j = mid+1;
    int n[100];
    int k = low;
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            n[k] = arr[i];
            i++;
        }
        else{
            n[k] = arr[j];
            j++;
        }
        k++;
    }
    if(i>mid){
        while(j<=high){
            n[k] = arr[j];
            k++;j++;
        }
    }
    else{
        while(i<=mid){
            n[k] = arr[i];
            i++;k++;
        }
    }
    for(int i=low; i<=high; i++){
        arr[i] = n[i];
    }
}

void mergeSort(int arr[], int low, int high){
    if(low<high){
        int mid = (low+high)/2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, high, mid);
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
        mergeSort(arr, 0, n-1);
        display(arr, n);
    }
    return 0;
}