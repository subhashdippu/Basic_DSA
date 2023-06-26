#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int binarySearch(int arr[], int n, int X){
    int low = 0;
    int high = n-1;
    // int mid;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==X){
            return mid;
        }
        if(arr[mid]<X){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}
int main(){
    int t;
    cout<<"Enter the test case no: ";
    cin>>t;
    while (t--)
    {
        int n;
        cout<<"Enter the size of array: ";
        cin>>n;
        int arr[n];
        int X;
        cout<<"Enter the element you want to search: ";
        cin>>X;
        for(int i=0; i<n; i++){
            cout<<"Enter the array element: ";
            cin>>arr[i];
        }
        printArray(arr, n);
        int a = binarySearch(arr, n, X);
        cout<<a<<" ";
        // printArray(arr, n);
    }
    return 0;
}