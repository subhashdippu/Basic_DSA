#include<iostream>
#include<vector>
using namespace std;
struct employee{
    int Id;
    char car;
    float salary;
};
int main(){
    struct employee Subhash;
    struct employee Dippu; 
    Subhash.Id = 545;
    Subhash.car = 'B';
    Subhash.salary = 50000000;

    cout<<Subhash.salary<<endl;
    cout<<Subhash.Id<<endl;
    cout<<Subhash.car<<endl;
    cout<<"\n";

    return 0;
}