#include <bits/stdc++.h>
using namespace std;

bool key_pair(int arr[], int k, int n)
{
    unordered_map<int, int> map;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (map[k - arr[i]])
        {
            map[(k - arr[i])]--;
            map[arr[i]]--;
            count++;
        }
        map[arr[i]]++;
    }
    return count;
}
int main()
{
    int arr[] = {3, 1, 3, 4, 3};
    int n = sizeof(arr) / sizeof(int);
    int a = key_pair(arr, 6, n);
    cout << a;
    return 0;
}