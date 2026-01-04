// Count pair of two sum
#include <iostream>
#include <unordered_map>
using namespace std;

int key_pair(int arr[], int n, int k)
{
    unordered_map<int, int> map;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int b = k - arr[i];
        if (map[b])
        {
            ans += map[b];
        }
        map[arr[i]]++;
    }
    return ans;
}
int main()
{
    int arr[] = {1, 1, 1, 1};
    int n = sizeof(arr) / sizeof(int);
    int a = key_pair(arr, n, 2);
    cout << a;
    return 0;
}