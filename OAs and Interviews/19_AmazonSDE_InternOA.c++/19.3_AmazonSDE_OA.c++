#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool function(const vector<int> &b, int n)
{
    vector<int> s(n + 1);
    s[n] = b[n];

    for (int i = n - 1; i >= 1; i--)
    {
        s[i] = max(b[i], s[i + 1]);
    }

    int p = b[1];
    for (int i = 2; i <= n - 1; i++)
    {
        if (p < b[i] && b[i] < s[i + 1])
        {
            return true;
        }
        p = min(p, b[i]);
    }

    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<int> b(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }

    bool result = function(b, n);
    cout << (result ? "True" : "False") << endl;

    return 0;
}
