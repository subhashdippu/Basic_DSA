
// #include <iostream>
// #include <limits>
// using namespace std;

// void solve(int arr[], int size)
// {

//     int maxFreqentElement = 0;
//     int maxFreq = 0;
//     int minFreqentElement = 0;
//     int minFreq = 9;
//     for (int i = 0; i < size; i++)
//     {
//         int cur = arr[i];
//         int count = 0;
//         for (int j = 0; j < size; j++)
//         {
//             if (cur == arr[j])
//             {
//                 count++;
//             }
//         }
//         if (count > maxFreq)
//         {
//             maxFreqentElement = cur;
//             maxFreq = count;
//         }
//         if (count < minFreq)
//         {
//             minFreqentElement = cur;
//             minFreq = count;
//         }
//     }
//     cout << maxFreqentElement << " " << maxFreq << "\n";
//     cout << minFreqentElement << " " << minFreq << "\n";
// }

// int main()
// {
//     int arr[10] = {2, 1, 3, 2, 3, 1, 5, 6, 5, 2};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     solve(arr, size);

//     return 0;
// }

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <limits>
#include <unordered_map>
using namespace std;

void solve(int arr[], int size)
{
    unordered_map<int, int> count;
    for (int i = 0; i < size; i++)
    {
        count[arr[i]]++;
    }
    int maxFreqElement = 0;
    int minFreqElement = 0;

    int minFreq = 9;
    int maxFreq = 0;
    for (auto x : count)
    {
        if (x.second > maxFreq)
        {
            maxFreqElement = x.first;
            maxFreq = x.second;
        }
        if (x.second < minFreq)
        {
            minFreqElement = x.first;
            minFreq = x.second;
        }
    }
    cout << maxFreqElement << " " << maxFreq << "\n";
    cout << minFreqElement << " " << minFreq << "\n";
}

int main()
{
    int arr[10] = {2, 1, 3, 2, 3, 1, 5, 6, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    solve(arr, size);

    return 0;
}