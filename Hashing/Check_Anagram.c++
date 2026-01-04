// #include <bits/stdc++.h>
#include<iostream>
using namespace std;

vector<vector<string>> Anagram(string str[], int n)
{
    vector<string> ans;
    unordered_map<string, vector<string>> map;
    for (int i = 0; i < n; i++)
    {
        string word = str[i];
        sort(str[i].begin(), str[i].end());
        map[str[i]].push_back(word);
    }
    for (auto x : map)
    {
        ans.push_back(x.second);
    }
    return ans;
}
int main()
{
    string str[] = {"eat", "tea", "tan", "ate", "nat", "bat"};
    int n = sizeof(str) / sizeof(str[0]);
    vector<vector<string>> vec;
    vec = Anagram(str, n);
    for (int i = 0; i < vec.size(); i++)
    {
        for (auto x : vec[i])
        {
            cout << x << " ";
        }
    }
    return 0;
}