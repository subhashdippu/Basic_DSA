#include <iostream>
using namespace std;
void printAllPrimeFactor(int prime)
{
    unordered_map<int, int> allFactor;
    while (prime % 2 == 0)
    {
        allFactor[2]++;
        prime = prime / 2;
    }
    for (int i = 3; i < sqrt(prime); i = i + 2)
    {
        while (prime % i == 0)
        {
            allFactor[i]++;
            prime = prime / i;
        }
    }
    if (prime > 2)
    {
        allFactor[prime]++;
    }
    for (auto s : allFactor)
    {
        cout << s.first << " " << s.second << "\n";
    }
}
int main()
{
    int prime = 812;
    printAllPrimeFactor(prime);
    return 0;
}