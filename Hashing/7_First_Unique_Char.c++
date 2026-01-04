// First Unique Character in a String

#include <iostream>
#include <unordered_map>
using namespace std;
int solve(string s, int n)
{
    int sum = 0;
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        map[s[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (map[s[i]] == 1)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    string s = "loveleetcode";
    int n = sizeof(s) / sizeof(s[0]);
    int x = solve(s, n);
    cout << x;
    return 0;
}