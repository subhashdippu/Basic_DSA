#include<iostream>
using namespace std;

int partition(int arr[], int low, int high){
    int i = low;
    int j = high;
    int pivot = arr[low];
    while(i<j){
        while(arr[i]<=pivot){
            i++;  // it will stop if there is any element which is greater then pivot
        }
        while(arr[j]>pivot){
            j--; // it will stop if there is any element which is smaller then pivot
        }
        if(i<j){
            swap(arr[i], arr[j]); // Swap the i and j 
        }
    }
    swap(arr[j],arr[low]);
    return j;
}

void mergeSort(int arr[], int low, int high){
    if(low<high){
        int pivot = partition(arr, low, high);
        mergeSort(arr, low, pivot-1);
        mergeSort(arr, pivot+1, high);
        // merge(arr, low, high, mid);
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