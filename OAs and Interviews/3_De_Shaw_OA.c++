// 6, June 2024

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>> &b)
{
    int n = b.size();
    if (n == 0)
        return {};

    sort(b.begin(), b.end());

    vector<vector<int>> merged;
    int l = b[0][0], r = b[0][1];

    for (int i = 1; i < n; ++i)
    {
        int l2 = b[i][0], r2 = b[i][1];

        if (l2 <= r)
        {
            r = max(r, r2);
        }
        else
        {
            merged.push_back({l, r});
            l = l2;
            r = r2;
        }
    }

    merged.push_back({l, r});
    return merged;
}

int binarySearch(const vector<vector<int>> &intervals, int left, int value)
{

    int right = intervals.size() - 1, ans = left;

    while (left <= right)
    {

        int mid = left + (right - left) / 2;

        if (intervals[mid][0] > value)
        {
            right = mid - 1;
        }
        else
        {
            ans = max(ans, mid);
            left = mid + 1;
        }
    }
    // cout<<"returning index "<<ans<<endl;
    return ans;
}

int main()
{

    vector<vector<int>> b = {{1, 5}, {2, 4}, {6, 6}, {7, 14}, {16, 19}, {22, 23}};
    int k = 2;

    vector<vector<int>> mergedIntervals = mergeIntervals(b);

    int n = mergedIntervals.size();
    int minUncovered = n;

    for (int i = 0; i < n - 1; i++)
    {
        // cout<<mergedIntervals[i][0]<<" sd "<<mergedIntervals[i][1]<<endl;
        int end = mergedIntervals[i][1];
        int stickEnd = end + k;
        // if(i == 0)cout<<stickEnd<<endl;
        int coveredIndex = binarySearch(mergedIntervals, i, stickEnd);
        int coveredCount = coveredIndex - i + 1;
        // cout<<i<<coveredCount<<endl;
        // cout<<"i is "<<i<<" coveredCount "<<coveredCount<<endl;
        minUncovered = min(minUncovered, n - coveredCount + 1);
    }

    cout << "Minimum number of uncovered intervals: " << minUncovered << endl;

    return 0;
}
