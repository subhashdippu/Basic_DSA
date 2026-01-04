#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

using namespace std;
class Solution
{
public:
    vector<int> matchingCnt(int n, vector<string> &X)
    {
        vector<vector<int>> g(200000 + 5, vector<int>(28, 0));
        vector<int> p(n, 0);

        for (int i = n - 1; i >= 0; i--)
        {
            string u = X[i];
            int c = 0;
            int d = u.size();
            for (int j = 0; j < d; j++)
            { // j --> column number
                int y = int(u[j]) - 97;
                c = c + g[j][y]; // g[j][y] --> tells you the frequency of y in col "j"
                g[j][y] = g[j][y] + 1;
            }
            p[i] = c;
        }

        return p;
    }
};

int main()
{
    Solution sol;
    int n = 3;
    vector<string> X;
    X.push_back("abc");
    X.push_back("ade");
    X.push_back("abc");
    vector<int> result = sol.matchingCnt(n, X);

    for (int i = 0; i < n; ++i)
    {
        cout << result[i] << " ";
    }

    return 0;
}
