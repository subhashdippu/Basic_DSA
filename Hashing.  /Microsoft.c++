
#include <iostream>
using namespace std;

int findDigitSum(int digit)
{
    int sum = 0;
    while (digit > 0)
    {
        sum += digit % 10;
        digit = digit / 10;
    }
    return sum;
}
void solve(int arr[], int size)
{
    int maxSum = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (findDigitSum(arr[i]) == findDigitSum(arr[j]))
            {
                maxSum = max(arr[i] + arr[j], maxSum);
            }
        }
    }
    cout << maxSum;
}
int main()
{
    int arr[3] = {42, 32, 55};
    int size = sizeof(arr) / sizeof(int);
    solve(arr, size);
    return 0;
}

// Optimize

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int findDigitSum(int digit)
// {
//     int sum = 0;
//     while (digit > 0)
//     {
//         sum += digit % 10;
//         digit = digit / 10;
//     }
//     return sum;
// }
// void solve(int arr[], int size)
// {
//     unordered_map<int, int> map;

//     int maxSum = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (map.find(findDigitSum(arr[i])) != map.end())
//         {
//             maxSum = max(map[findDigitSum(arr[i])] + arr[i], maxSum);
//         }
//         else
//         {
//             map[findDigitSum(arr[i])] = arr[i];
//         }
//     }
//     cout << maxSum;
// }
// int main()
// {
//     int arr[4] = {51, 71, 7, 4};
//     int size = sizeof(arr) / sizeof(int);
//     solve(arr, size);
//     return 0;
// }