#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 3, 2, 5, 2, 3, 5, 5, 1, 0};
    int size = sizeof(arr) / sizeof(int);
    int hashArray[11] = {0};

    for (int i = 0; i < size; i++)
    {
        int read = arr[i];
        hashArray[read] = hashArray[read] + 1;
    }
    for (int i = 0; i < size; i++)
    {
        if (hashArray[i] > 0)
        {
            cout << i << " " << hashArray[i] << "\n";
        }
    }
    return 0;
}

// #include <iostream>
// // #include <bits/stdc++.h>
// // #include <unordered_map>
// using namespace std;

// unordered_map<int, int> map;
// void PrintFreqency(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         map[arr[i]]++;
//     }
//     for (auto it = map.begin(); it != map.end(); it++)
//     {
//         cout << it->first << " " << it->second << "\n";
//     }
//     // for (auto x : map)
//     // {
//     //     cout << x.first << x.second << "\n";
//     // }
// }

// int main()
// {
//     int arr[] = {1, 3, 2, 5, 2, 3, 5, 5, 1};
//     int n = sizeof(arr) / sizeof(int);
//     PrintFreqency(arr, n);
//     return 0;
// }