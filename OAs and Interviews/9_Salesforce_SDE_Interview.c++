// 6, May 2024
#include <iostream>
#include <vector>
using namespace std;

bool check(int A[], int n, int B[], int m)
{
    vector<int> prefB(m, n); // initialize prefB with -1
    vector<int> sufB(m, -1); // initialize sufB with -1

    int i = 0, j = 0, count = 0;

    // First pass to populate prefB
    while (i < m && j < n)
    {
        if (A[j] == B[i])
        {
            prefB[i] = j;
            i++;
            j++;
            count++;
        }
        else
        {
            j++;
        }
    }

    i = m - 1;
    j = n - 1;

    // Second pass to populate sufB
    while (i >= 0 && j >= 0)
    {
        if (A[j] == B[i])
        {
            sufB[i] = j;
            i--;
            j--;
        }
        else
        {
            j--;
        }
    }

    int good = 0;

    // Third pass to count 'good' elements
    for (i = 0; i < m; i++)
    {
        int l = (i > 0) ? prefB[i - 1] : -1;   // Handling edge case
        int r = (i < m - 1) ? sufB[i + 1] : n; // Handling edge case
        if (l < r)
        {
            good++;
        }
    }

    cout << good << endl;

    return true; // You can change this return value as per your requirement
}

int main()
{
    int A[] = {1, 2, 5, 8, 8, 6, 5, 4, 3};
    int n = sizeof(A) / sizeof(A[0]);
    int B[] = {5, 5};
    int m = sizeof(B) / sizeof(B[0]);

    check(A, n, B, m);

    return 0;
}
