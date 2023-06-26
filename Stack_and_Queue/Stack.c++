#include<iostream>
using namespace std;

class stack{
    public:
        int *arr;
        int top;
        int size;

    stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(top>=-1 && top<size-1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack OverFlow "<<endl;
        }
    }
    void pop(){
        if(top>-1){
            top--;
        }
        else{
            cout<<"Stack is empty "<<endl;
        }
    }
    int peek(){
        if(top>-1){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }
    bool empty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){

    stack a(5);
    a.push(4);
    a.push(41);
    a.push(42);
    a.push(44);
    a.push(43);
    a.push(464);
    // a.push(44);
    // a.pop();
    // a.pop();
    // a.pop();
    // a.pop();
    // a.pop();
    cout<<a.peek()<<endl;
    // cout<<a.empty();
    return 0;
}