#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "ramram";
    string b = "mra";
    int n = a.size();
    int m = b.size();
    int i = 0;
    int j = 0;
    int count = 0;
    while (i < n && j < m)
    {
        if (a[i] != b[j])
        {
            i++;
        }
        else
        {
            j++;
            i++;
            count++;
        }
    }
    if (count == m)
    {
        cout << count;
    }
    else
    {
        cout << "The string is not subset of a";
    }
    return 0;
}