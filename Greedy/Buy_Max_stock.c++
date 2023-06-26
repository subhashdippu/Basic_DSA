#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cout << "Enter the test case: ";
    cin >> t;
    while (t--)
    {
        int n;
        cout << "Enter the size of array: ";
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cout << "Enter the value: ";
            cin >> arr[i];
        }
        int k;
        cout << "Enter the money you have: ";
        cin>>k;
        vector<pair<int,int> >v;
        for (int i = 0; i < n; i++)
        {
            v.push_back(make_pair(arr[i],i+1));
        }
        sort(v.begin(), v.end());
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int price = v[i].first;
            int stock = v[i].second;
            if(price*stock <= k){
                ans += stock;
                k -= (price*stock);
            }
            else{
                ans += (k/price);
                k -= price*(k/price);
            }
        }
        cout <<"Your ans is: "<<ans;
    }
    return 0;
}