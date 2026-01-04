// 28, May 2024
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to count the number of digits in an integer
int digit_count(int num)
{
    return to_string(num).length();
}

int main()
{
    int n = 3;
    vector<int> b = {0, 3, 14, 15};

    long long sum = 0;
    long long ans = 0;

    for (int j = 1; j <= n; ++j)
    {
        int y = digit_count(b[j]);
        long long vl = (j - 1) * b[j] + pow(10, y) * sum;
        ans += vl;
        sum += b[j]; // Update sum with the current b[j]
    }

    cout << "Sum: " << ans << endl;
    return 0;
}
