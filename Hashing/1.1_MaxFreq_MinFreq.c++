// #include <iostream>
// using namespace std;
// int main()
// {

//     int arr[6] = {3, 2, 3, 2, 4, 3};
//     int n = sizeof(arr) / sizeof(int);
//     int curNo = 0;
//     int curFreq = 0;

//     int maxNo = 0;
//     int maxFreq = 0;

//     int minNo = 0;
//     int minFreq = 8998;

//     for (int i = 0; i < n; i++)
//     {
//         curNo = arr[i];
//         curFreq = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 curFreq++;
//             }
//         }
//         if (maxFreq < curFreq)
//         {
//             maxFreq = curFreq;
//             maxNo = curNo;
//         }
//         if (minFreq > curFreq)
//         {
//             minFreq = curFreq;
//             minNo = curNo;
//         }
//     }
//     cout << maxNo << " " << maxFreq << "\n";
//     cout << minNo << " " << minFreq << "\n";

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{

    int arr[6] = {3, 2, 3, 2, 4, 3};
    int n = sizeof(arr) / sizeof(int);
    int curNo = 0;
    int curFreq = 0;

    int maxNo = 0;
    int maxFreq = 0;

    int minNo = 0;
    int minFreq = 8998;
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }

    for (auto it = map.begin(); it != map.end(); it++)
    {
        if (it->second > maxFreq)
        {
            maxFreq = it->second;
            maxNo = it->first;
        }
        if (it->second < minFreq)
        {
            minFreq = it->second;
            minNo = it->first;
        }
    }

    cout << maxNo << " " << maxFreq << "\n";
    cout << minNo << " " << minFreq << "\n";

    return 0;
}