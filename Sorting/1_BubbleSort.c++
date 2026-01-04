#include <iostream>
using namespace std;
// 0(N)
// 0(N^2)
// O(N'2)
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    { // Here we use n-1 because of no: of pases
        bool swaped = false;
        for (int j = 0; j < n-1; j++)
        { // Here j+1 that's why we use n-1
            if (arr[j] > arr[j + 1])
            {
                swaped = true;
                swap(arr[j], arr[j + 1]);
            }
        }
        if (!swaped)
        {
            break;
        }
    }
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
    int test;
    cout << "Enter the test case: ";
    cin >> test;
    while (test--)
    {
        int size;
        cout << "Enter the size of array: ";
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cout << "Enter the Element " << i + 1 << " ";
            cin >> arr[i];
        }
        display(arr, size);
        bubbleSort(arr, size);
        display(arr, size);
    }
    return 0;
}