/* https : // docs.google.com/document/d/114RXjw-tefd8U8fryBVB7JgzGXq9Sch2paNfy0yb6MM/edit
https: // drive.google.com/file/d/17bpVnxTEJrvZCIn7uxdB19Zq2joKhhgg/view
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "ffttfttf";

    int n = s.size();

    int cnt = 0;

    for (int i = 0; i < n - 1; i++)
    {

        if (s[i] == s[i + 1])
        {
            cnt++;
        }
    }

    cout << (cnt + 1) / 2 << endl;
}