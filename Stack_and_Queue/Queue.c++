#include<iostream>
using namespace std;

class queue{
    public:
        int *arr;
        int size;
        int front;
        int rear;
        queue(){
            size = 1000;
            arr = new int[size];
            front = 0;
            rear = 0;
            cout<<"Hello"<<"\n";
        }
        bool empty(){
            if(front == 0){
                cout<<"Queue is empty";
            }
            return -1;
            
        }
        void enqueue(int element){
            if(size==rear){
                cout<<"Queue is full";

            }
            else{
                rear++;
                arr[rear] = element;
            }
        }
        void dequeue(){
            if(front == 0){
                return;
            }
            else{
                front++;
                if(front == rear){
                    front = 0;
                    rear = 0;
                }
            }
        }
        int front1(){
            if(front == rear){
                return -1;
            }
            else{
                return arr[front];
            }
        }
};
int main(){
    // q queue();
    queue q();
    // q.enqueue(4);
    // q->enqueue(41);
    // q->enqueue(42);
    // q->enqueue(44);
    // q->enqueue(45);
    return 0;
}