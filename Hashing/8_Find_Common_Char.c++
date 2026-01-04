// Find Common Characters in string words
// #include <bits/stdc++.h>
#include <iostream>
// #include <vector>
using namespace std;
vector<string> solve(vector<string> s)
{
    vector<int> minFreq(26, INT_MAX);
    vector<string> res;
    for (auto &word : s)
    {
        vector<int> freq(26, 0); // Here the frequency vector is initialize with zero or {minimum is 0 here}
        for (char c : word)
        {
            freq[c - 'a']++; //  this will update only first string
        }
        for (int i = 0; i < 26; i++)
        {
            minFreq[i] = min(minFreq[i], freq[i]);
        }
    }
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < minFreq[i]; j++)
        {
            res.push_back(string(1, i + 'a'));
        }
    }

    return res;
}
int main()
{
    vector<string> arr = {"bella", "label", "roller"};
    vector<string> ans = solve(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}