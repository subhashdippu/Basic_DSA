/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

void solve(int arr[], int n)
{
    int count = 0;
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }

    for (auto x : map)
    {
        count += x.second / 3;
        if (x.second % 3 != 0)
        {
            count += (x.second + 1) / 3;
        }
    }
    cout << count;
}
int main()
{
    int arr[9] = {1, 5, 5, 1, 1, 8, 8, 10, 10};
    int size = sizeof(arr) / sizeof(int);
    solve(arr, size);
    return 0;
}

// #include <iostream>
// #include <unordered_map>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int minOperationsToDestroyArray(vector<int> &arr)
// {
//     unordered_map<int, int> freqMap;
//     for (int num : arr)
//     {
//         freqMap[num]++;
//     }

//     int minOperations = 0;
//     for (auto &entry : freqMap)
//     {
//         int freq = entry.second;
//         if (freq == 1)
//         {
//             return -1; // According to Tariquddin’s law
//         }
//         else
//         {
//             // According to Tanmai’s Law
//             minOperations += freq / 3 + (freq % 3 != 0);
//         }
//     }
//     return minOperations;
// }

// int main()
// {
//     vector<int> arr = {1, 5, 5, 1, 1, 8, 8, 10, 10};
//     int minOps = minOperationsToDestroyArray(arr);
//     if (minOps == -1)
//     {
//         cout << "It's not possible to destroy the array" << endl;
//     }
//     else
//     {
//         cout << "Minimum number of operations to destroy the array-> " << minOps << endl;
//     }
//     return 0;
// }
