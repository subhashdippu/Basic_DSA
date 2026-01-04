#include <iostream>
#include <unordered_map>
using namespace std;

bool check_array_is_subset_of_another_array(int arr1[], int arr2[], int n, int m)
{
    unordered_map<int, int> map;

    for (int i = 0; i < n; i++)
    {
        map[arr1[i]]++;
    }
    for (int i = 0; i < m; i++)

    {
        // if(map.find(arr[i]) != map.end() || map[arr[i]] == 0)
        if (map[arr2[i]] == 0)
        {
            return 0;
        }
        else
        {
            map[arr2[i]]--;
        }
    }
    return 1;
}
int main()
{
    int setA[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int setB[] = {1, 2, 3, 4, 5, 6, 7};
    int sizeA = sizeof(setA) / sizeof(int);
    int sizeB = sizeof(setB) / sizeof(int);
    bool a = check_array_is_subset_of_another_array(setA, setB, sizeA, sizeB);
    cout << a;
    return 0;
}