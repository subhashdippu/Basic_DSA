#include <bits/stdc++.h>
using namespace std;
int p = -1;
int isMatching(string A, string B)
{
    int n = A.size();
    int m = B.size();
    int i = 0, j = 0, count = 0;

    while (i < m && j < n)
    {
        if (A[j] == B[i])
        {
            if (count == 0)
            {
                p = j;
            }

            i++;
            j++;
            count++;
        }
        else
        {
            j++;
        }
    }

    return count == m;
}
int main()
{
    string a = "ramram";
    string b = "mra";
    int answer = -1;
    for (int i = 1; i < b.size(); i++)
    {

        for (char c = 'a'; c <= 'z'; c++)
        {
            string r = b;
            r[i] = c;
            p = -1;
            if (isMatching(a, r))
            { // p!=-1
                answer = p + 1;
            }
        }
    }
    cout << answer;
    cout << "\n";

    return 0;
}