// Check if a given array contains duplicate elements {{ within }} k distance from each other

#include <iostream>
#include <unordered_map>
using namespace std;
bool AtKdistance(int arr[], int n, int k)
{
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        if (map.find(arr[i]) != map.end())
        {
            return true;
        }
        else
        {
            map[arr[i]]++;
        }
        if (i >= k)
        {
            map.erase(arr[i - k]);
        }
    }
    return false;
}
int main()
{
    int arr[] = {10, 10, 5, 3, 32, 322, 25, 6};
    int n = sizeof(arr) / sizeof(int);
    int k = 3;
    bool a = AtKdistance(arr, n, k);
    cout << a;
    return 0;
}