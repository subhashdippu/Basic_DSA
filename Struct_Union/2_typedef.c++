#include<iostream>
#include<vector>
using namespace std;

// Store Multi data type means disimiler data type
typedef struct employee{
    int Id;
    char car;
    float salary;
}em; // Write em instead of stuct employee
int main(){
    em Subhash;
    struct employee Dippu; 
    Subhash.Id = 545;
    Subhash.car = 'B';
    Subhash.salary = 50000000;

    cout<<Subhash.salary<<endl;
    cout<<Subhash.Id<<endl;
    cout<<Subhash.car<<endl;
    cout<<"\n";

    Dippu.Id = 54;
    Dippu.car = 'S';
    Dippu.salary = 90000000;

    cout<<Dippu.salary<<endl;
    cout<<Dippu.Id<<endl;
    cout<<Dippu.car<<endl;

    return 0;
}