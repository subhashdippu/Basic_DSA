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
    string str1 = "aaagram";
    string str2 = "nagaram";
    bool a = anagram(str1, str2);
    cout << a;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// bool anagram(string str1, string str2)
// {
//     if (str1.size() != str2.size())
//     {
//         return false;
//     }
//     unordered_map<char, int> map;
//     for (auto x : str1)
//     {
//         map[x]++;
//     }
//     for (int i = 0; i < str2.size(); i++)
//     {
//         if (map.find(str2[i]) == map.end()) // if element is not founnd till end of the map
//         {
//             return false;
//         }
//         map[str2[i]]--;
//         if (map[str2[i]] < 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int main()
// {
//     string str1 = "anagram";
//     string str2 = "nagaram";
//     bool a = anagram(str1, str2);
//     cout << a;
//     return 0;
// }