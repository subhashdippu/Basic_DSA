#include<iostream>

using namespace std;

// same as structure but it uses only one size of data take lage one 
typedef union employee{ 
    int Id;        // 4bit
    char car;      // 1bit
    float salary;  // 4bit
}em; // Write em instead of stuct employee
int main(){
    em Subhash;
    union employee Dippu;
    Dippu.salary = 488;
    // Dippu.Id = 4; // only use one data at a time it through garbege value
    cout<<Dippu.salary;
    return 0;
}