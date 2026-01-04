#include <iostream>
#include <unordered_map>

using namespace std;

int key_pair(int arr[], int n, int k)
{
    int count = 0;
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        if(map.find(k - arr[i]) != map.end()){
            count += map[k - arr[i]];
        }
        if(map.find(k + arr[i]) != map.end()){
            count += map[k + arr[i]];
        }
        map[arr[i]]++;
    }
    return count;
}

int main()
{
    int arr[6] = {1, 5, 3, 4, 2};

    int n = sizeof(arr) / sizeof(int);
    int a = key_pair(arr, n, 2);
    cout << a;
    return 0;
}
