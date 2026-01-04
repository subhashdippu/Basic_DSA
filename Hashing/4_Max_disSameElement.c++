#include <iostream>
#include <unordered_map>
using namespace std;
int find_distance(int arr[], int n)
{
    unordered_map<int, int> map;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        if (map.find(arr[i]) != map.end())
        {
            x = max(x, i - map[arr[i]]);
        }
        else
        {
            map[arr[i]] = i;
        }
        // map[arr[i]] = i;// updates the index every time, so it overwrites the first occurrence
    }
    return x;
}
int main()
{
    int arr[] = {1, 2, 2, 2,1,3,4,5, 1};
    int n = sizeof(arr) / sizeof(int);
    int x = find_distance(arr, n);
    cout << x;
    return 0;
}
