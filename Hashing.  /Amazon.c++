/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

void solve(string s, string t)
{
    unordered_map<char, int> Word;
    unordered_map<char, int> Target;
    int n = t.size();
    char arr[n];
    for (int i = 0; i < s.size(); i++)
    {
        Word[s[i]]++;
    }
    for (int i = 0; i < t.size(); i++)
    {
        Target[t[i]]++;
    }
    for (int i = 0; i < t.size(); i++)
    {
        if (Word.find(t[i]) != Word.end())
        {
            arr[i] = Word[t[i]] / Target[t[i]];
        }
    }
    int min = *min_element(arr, arr + n);
    cout << min;
}
int main()
{
    string s = "abacbc";
    string t = "bca";
    solve(s, t);

    return 0;
}