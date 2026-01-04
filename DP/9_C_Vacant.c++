// #include <bits/stdc++.h>
#include<iostream>
using namespace std;
int maxSum(int arr1[], int arr2[], int arr3[], int sizeA, int sizeB, int sizeC)
{
    int dpA[sizeA];
    int dpB[sizeB];
    int dpC[sizeC];

    dpA[0] = arr1[0];
    dpB[0] = arr2[0];
    dpC[0] = arr3[0];
    int i = 1;
    while (i < 3)
    {
        dpA[i] = dpA[i] + max(dpB[i - 1], dpC[i - 1]);
        dpB[i] = dpB[i] + max(dpA[i - 1], dpC[i - 1]);
        dpC[i] = dpC[i] + max(dpB[i - 1], dpA[i - 1]);
        i++;
    }
    int a = max(max(dpA[sizeA - 1], dpB[sizeB - 1]), dpC[sizeC - 1]);
    return a;
}

int main()
{
    int arr1[] = {10, 20, 30};
    int arr2[] = {40, 50, 60};
    int arr3[] = {70, 80, 90};
    int sizeA = sizeof(arr1) / sizeof(arr1[0]);
    int sizeB = sizeof(arr2) / sizeof(arr2[0]);
    int sizeC = sizeof(arr3) / sizeof(arr3[0]);
    int ans = maxSum(arr1, arr2, arr3, sizeA, sizeB, sizeC);
    cout << ans;
    return 0;
}