#include <bits/stdc++.h>
using namespace std;
vector<int> solve(int arr[], int n)
{
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                // <---Most Important basic--->#here arr[i] < arr[j] this will give you the ture $ and the true < arr[k] so this is wrong
                // if (arr[i] < arr[j] && arr[j] < arr[k]){};
                if (arr[i] < arr[j] && arr[j] < arr[k])
                {
                    vec.push_back(arr[i]);
                    vec.push_back(arr[j]);
                    vec.push_back(arr[k]);
                }
            }
        }
    }
    return vec;
}
int main()
{
    int arr[] = {18, 5, 4, 3, 2, 1, 8, 10};
    int n = sizeof(arr) / sizeof(int);
    vector<int> ans;
    ans = solve(arr, n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";
    cout << ans.size() / 3;
    return 0;
}