// Sum_Of_Divisible_by K

#include <bits/stdc++.h>
using namespace std;

int key_pair(int arr[], int n, int k)
{
    unordered_map<int, int> map;
    int sum = 0;
    map[0]++;
    int rem;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        rem = sum % k;
        if (rem < 0)
        {
            rem += k;
        }
        if (map.find(rem) != map.end())
        {
            count += map[rem];
        }
        map[rem]++;
    }
    return count;
}
int main()
{
    int arr[] = {4, 5, 0, -2, -3, 1};
    int n = sizeof(arr) / sizeof(int);
    int a = key_pair(arr, n, 5);
    cout << a;
    return 0;
}