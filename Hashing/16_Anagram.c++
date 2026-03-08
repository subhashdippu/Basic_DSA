#include <bits/stdc++.h>
using namespace std;

bool anagram(string str1, string str2)
{
    if (str1.size() != str2.size())
    {
        return false;
    }
    int arr[26] = {0};
    for (int i = 0; i < str1.size(); i++)
    {
        arr[str1[i] - 'a']++;
    }
    for (int i = 0; i < str2.size(); i++)
    {
        if (arr[str2[i] - 'a'] == 0)
        {
            return false;
        }
        arr[str2[i] - 'a']--;
    }
    return true;
}
int main()
{
    string str1[] = {"eat", "tea", "tan", "ate", "nat", "bat"};
    return 0;
}