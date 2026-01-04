#include <bits/stdc++.h>
using namespace std;
int longest(string arr[], int n)
{
    int rr = 0;
    int gg = 0;
    int rg = 0;
    int gr = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i][0] == 'R' && arr[i][1] == 'R')
            rr++;
        if (arr[i][0] == 'G' && arr[i][1] == 'G')
            gg++;
        if (arr[i][0] == 'R' && arr[i][1] == 'G')
            rg++;
        if (arr[i][0] == 'G' && arr[i][1] == 'R')
            gr++;
    }
    if (rg == 0 && gr == 0)
    {
        return max(rr, gg);
    }
    if (rg == 0 && gr >= 1)
    {
        return gg + rr + 1;
    }
    if (gr == 0 && rg >= 1)
    {
        return gg + rr + 1;
    }

    if (rg >= 1 && gr >= 1)
    {
        if (rr >= 1 && gg >= 1)
        {

            if (rg > gr)
                return rr + 2 * gr + 1 + gg;
            else if (gr > rg)
            {
                return rr + 2 * rg + 1 + gg;
            }
            else
            {
                return rr + gg + 2 * rg;
            }
        }
        else if (rr == 0)
        {
            if (rg > gr)
            {
                return gg + 2 * gr + 1;
            }
            else if (gr > rg)
            {
                return gg + 2 * gr + 1;
            }
            else
            {
                return gg + gr + rg;
            }
        }
        else if (gg == 0)
        {
            if (rg > gr)
            {
                return rr + 2 * gr + 1;
            }
            else if (gr > rg)
            {
                return rr + 2 * gr + 1;
            }
            else
            {
                return rr + gr + rg;
            }
        }
        else
        {
            if (rg == gr)
            {
                return gr + rg;
            }
            else
            {
                return 2 * min(rg, gr) + 1;
            }
        }
    }
    return -1;
}
int main()
{
    string arr[] = {"RR", "GG", "GR", "RG", "GR", "RR"};
    int n = sizeof(arr) / sizeof(arr[0]);
    int a = longest(arr, n);
    cout << a;
    return 0;
}