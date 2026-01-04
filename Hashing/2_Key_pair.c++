// #include <iostream>
// #include <unordered_map>
#include <bits/stdc++.h>
using namespace std;

bool key_pair(int arr[], int n, int t)
{
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        if (map[t - arr[i]] == 1) // We are pushing only 1 as frequency That's why can use this, this is for only this kind of question where you have to return 1 or 0
        {
            return 1;
        }
        else
        {
            map[arr[i]] = 1;
        }
    }
    return 0;
}
int main()
{
    int arr[6] = {1, 4, 45, 6, 10, 8};
    int n = sizeof(arr) / sizeof(int);
    int a = key_pair(arr, n, 10);
    cout << a;
    return 0;
}

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5};
//     int k = 6;
//     bool flag = false;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = i + 1; j < arr.size(); j++)
//         {
//             if (arr[i] + arr[j] == k)
//             {
//                 cout << "Yes";
//                 flag = true;
//                 break;
//             }
//         }
//         if (flag)
//         {
//             break;
//         }
//     }
//     if (!flag)
//     {
//         cout << "No";
//     }

//     return 0;
// }