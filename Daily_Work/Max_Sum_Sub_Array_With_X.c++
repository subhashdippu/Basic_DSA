// Max_Sum_Sub_Array_With_X

#include <iostream>
using namespace std;
int maxSum(int arr[], int n, int target)
{
    int dpMul[n + 1];
    int dpNonMul[n + 1];
    int dpKadane[n + 1];
    int i = 1;
    dpKadane[0] = max(0, arr[0]);
    dpMul[0] = max(0, arr[0] * target);
    dpNonMul[0] = max(0, arr[0]);

    int result = max({dpKadane[0], dpMul[0], dpNonMul[0]});
    while (i < n)
    {
        dpKadane[i] = max(max(arr[i], dpKadane[i - 1] + arr[i]), 0);
        dpMul[i] = max(max(max(arr[i] * target,
                               arr[i] * target + dpKadane[i - 1]),
                           arr[i] * target + dpMul[i - 1]),
                       0);
        dpNonMul[i] = max(max(max(dpKadane[i], arr[i] + dpNonMul[i - 1]), dpMul[i - 1] + arr[i]), 0);
        result = max({result, dpKadane[i], dpMul[i], dpNonMul[i]});
        i++;
    }
    return result;
}
int main()
{
    int arr[] = {-1, -2, 3, 4, 5, -10};
    int size = sizeof(arr) / sizeof(int);
    int x = 3;
    int ans = maxSum(arr, size, x);
    cout << ans;
    return 0;
}