#include <iostream>
using namespace std;

struct stack
{
    int *arr;
    int top;
    int size;
    stack(int val)
    {
        size = val;
        top = -1;
        arr = new int[size];
    }
    void push(int element)
    {
        if (top <= size - 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack overflow" << "\n";
        }
    }
    void pop()
    {
        if (top > -1)
        {
            top--;
            // free(arr[top]);
        }
        else
        {
            cout << "Stack is empty" << "\n";
        }
    }
    int peek()
    {
        if (top > -1)
        {
            return arr[top];
        }
        cout << "Stack is empty" << "\n";
        return -1;
    }
};
int main()
{
    stack a(5);
    a.push(61);
    a.push(62);
    a.push(63);
    a.push(64);
    a.push(65);
    a.push(66);
    a.pop();
    a.pop();
    a.pop();
    a.pop();
    cout << a.peek();
    return 0;
}