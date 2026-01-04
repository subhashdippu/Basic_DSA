// Count subarray with k sum

// #include <bits/stdc++.h>
#include<iostream>
using namespace std;

int key_pair(int arr[], int n, int k)
{
    unordered_map<int, int> map;
    int sum = 0;
    map[0] = -1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (map.find(sum % k) != map.end())
        {
            if (i - map[sum % k] >= 2)
            {
                return true;
            }
        }
        else
        {
            map[sum % k] = i;
        }
    }
    return false;
}
int main()
{
    int arr[] = {5, 0, 0, 0};
    int n = sizeof(arr) / sizeof(int);
    int a = key_pair(arr, n, 3);
    cout << a;
    return 0;
}