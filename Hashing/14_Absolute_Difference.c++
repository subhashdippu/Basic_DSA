#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int n, int k)
{
    unordered_map<int, int> map;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (map.find(arr[i] - k) != map.end())
        {
            count += map[arr[i] - k];
        }
        if (map.find(arr[i] + k) != map.end())
        {
            count += map[arr[i] + k];
        }
        map[arr[i]]++;
    }
    return count;
}
int main()
{
    int arr[] = {3, 2, 1, 5, 4};
    int n = sizeof(arr) / sizeof(int);
    int a = solve(arr, n, 2);
    cout << a;
    return 0;
}