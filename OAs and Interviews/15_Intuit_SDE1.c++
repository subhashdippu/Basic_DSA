#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
    int n, x, y;
    cin >> n;
    vector<int> b(n + 1), p(n + 1, 0), p0(n + 1, 0);
    unordered_map<int, int> k;
    k[0] = 1;
    cin >> x;
    cin >> y;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }

    for (int j = 1; j <= n; j++)
    {

        p[j] = p[j - 1] + b[j];
        p0[j] = p0[j - 1];
        if (b[j] == 0)
        {
            p0[j]++;
        }
        // // cout<<"i is "<<i<<" sum is "<<p[i]<<endl;
        // int vl = p[i] - y;
        // // cout<<" cnt is "<<count<<" value i is "<<i<<endl;

        // if(vl>=0){
        //     count += k[vl]; // frequency of vl from [1.....i-1]
        // }

        // k[p[i]]++;

        int G1 = p0[j] * y - p[j] * x;
        count = count + k[G1]; // frequency of G1 from [1.....i-1]

        k[G1] = k[G1] + 1;
    }

    cout << "Number of good subarrays: " << count << endl;
    return 0;
}
