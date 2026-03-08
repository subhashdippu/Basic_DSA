#include <iostream>
using namespace std;
void printDivisors(int factor)
{
    vector<int> allDiviser;
    for (int i = 1; i <= sqrt(factor); i++)
    {
        if (factor % i == 0)
        {
            if (factor / i == i)
            {
                allDiviser.push_back(i);
            }
            else
            {
                allDiviser.push_back(i);
                allDiviser.push_back(factor / i);
            }
        }
    }
    for (int i = 0; i < allDiviser.size(); i++)
    {
        cout << allDiviser[i] << " ";
    }
}
int main()
{
    int factor = 100;
    printDivisors(factor);
    return 0;
}