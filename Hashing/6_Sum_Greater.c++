// SumOfElementGreater then its freqency

#include <iostream>
#include <unordered_map>
using namespace std;
int solve(int arr[], int n)
{
    int sum = 0;
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }
    for (auto x : map)
    {
        if (x.first <= x.second)
        {
            sum += x.first;
        }
    }
    return sum;
}
int main()
{
    int arr[] = {1, 3, 2, 5, 2, 3, 5, 5, 1};
    int n = sizeof(arr) / sizeof(int);
    int x = solve(arr, n);
    cout << x;
    return 0;
}