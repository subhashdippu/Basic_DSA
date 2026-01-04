#include<iostream>
using namespace std;

class Queue{
    public:
    int front;
    int back;
    int *arr;
    int size;

    Queue(int val){
        front = -1;
        back = -1;
        size = val;
        arr = new int[size];
    }

    void push(int val){
        if(back <size){
            back++;
            arr[back] = val;
        }
    }
    void pop(){
        if(front == back){
            cout<<"Queue is empty";
        }
        else{
            front--;
        }
    }
    void empty(){
        if(front == back){
            cout<<"Queue is empty";
        }
    }
};

int main(){
    Queue a(5);
    a.empty();
    return 0;
}






// #include<iostream>
// using namespace std;

// class Stack{
//     public:
//     int *arr;
//     int size;
//     int top;

//     Stack(int val){
//         size = val;
//         arr = new int[val];
//         top = -1;
//     }
//     void push(int val){
//         if(top < size){
//             top++;
//             arr[top] = val;
//         }

//     }
//     int pop(){
//         if(top != -1){
//             top--;
//             return 1;
//         }
        
//         return -1;
        
//     }
//     void peek() {
//         if (top == -1) {
//             cout << "Stack is empty!\n";
          
//         } 
//         cout<<"This is the top no: "<<arr[top];
        
//     }
// };
// int main(){
//     Stack a(5);
//     a.push(41);
//     a.push(42);
//     a.push(43);
//     // a.push(44);
//     a.peek();
//     return 0;
// }