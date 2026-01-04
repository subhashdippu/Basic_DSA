#include <iostream>
using namespace std;
// 0(N log N)
// 0(N log N)
// O(N*2)
int partition(int arr[], int low, int high)
{
    int i = low;
    int j = high;
    int pivot = arr[low];
    while (i < j)
    {
        while (arr[i] <= pivot)
        {
            i++; // it will stop if there is any element which is greater then pivot
        }
        while (arr[j] > pivot)
        {
            j--; // it will stop if there is any element which is smaller then pivot
        }
        if (i < j)
        {
            swap(arr[i], arr[j]); // Swap the i and j here j is greater
        }
    }
    swap(arr[j], arr[low]);
    return j;
}


int i = low;
int j = high;
int pivot = arr[0];
while(i<j){
    while(arr[i]<=pivot) i++;
    while(arr[j]>pivot) j--;
    if(i<j){
        swap(arr[i], arr[j]);
    }
}
swap(arr[low], arr[j])
return j;

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1); // pivot is sorted means mid point
        quickSort(arr, pivot + 1, high);
    }
}


if(low<high){

    int pivot = partition(arr, low, high);
    quickSort(arr, low, pivot-1);
    quickSort(arr, pivot +1, high);
}
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
int main()
{
    int t;
    cout << "Enter the no: of test case: ";
    cin >> t;
    while (t--)
    {
        int n;
        cout << "Enter the size of array: ";
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cout << "Enter the element ";
            cin >> arr[i];
        }
        display(arr, n);
        quickSort(arr, 0, n - 1);
        display(arr, n);
    }
    return 0;
}