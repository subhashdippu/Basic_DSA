// Count subarray with k sum

#include <iostream>
#include <unordered_map>
using namespace std;

int sub_array_count(int arr[], int n, int k)
{
    unordered_map<int, int> map;
    int count = 0;
    int cur_sum = 0;
    map[0] = 1;
    for (int i = 0; i < n; i++)
    {
        cur_sum += arr[i];
        if (map.find(cur_sum - k) != map.end())
        {
            count += map[cur_sum - k];
        }
        map[cur_sum]++;
    }
    return count;
}
int main()
{
    int arr[] = {3, 9, -2, 4, 1, -7, 2, 6, -5, 8, -3, -7, 6, 2, 1};
    int n = sizeof(arr) / sizeof(int);
    int a = sub_array_count(arr, n, 5);
    cout << a;
    return 0;
}