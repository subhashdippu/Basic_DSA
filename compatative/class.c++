#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int>vec;
    vec.push_back(4);
    vec.push_back(6);
    vec.push_back(5);
    vec.push_back(3);
    vec.push_back(61);
    for(int i =0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}