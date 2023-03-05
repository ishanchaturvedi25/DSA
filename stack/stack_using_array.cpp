#include <iostream>

using namespace std;

class Stack {

    public:
        int top;
        int *arr;
        int size;

    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int num) {
        if(top == size-1)
            cout << "Stack is Full" << endl;
        else
            arr[++top] = num;
    }

    void pop() {
        if(top == -1)
            cout << "Stack is Empty" << endl;
        else
            arr[top--];
    }

    int peek() {
        if(top == -1) {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        else
            return arr[top];
    }

    bool isEmpty() {
        if(top == -1)
            return true;
        return false;
    }

    bool isFull() {
        if(top == size-1)
            return true;
        return false;
    }

};


int main() {

    /*
    stack<int> s;
    
    s.push(2);
    s.push(3);
    s.pop();

    cout << "Top " << s.top() << endl;

    if(s.empty())
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is not empty" << endl;

    cout << "Size of Stack : " << s.size() << endl;
    */

    Stack s(5);

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    s.pop();

    cout << s.peek() << endl;

    s.pop();

    cout << s.peek() << endl;

    s.pop();

    cout << s.peek() << endl;

    s.pop();

    cout << s.peek() << endl;

    s.pop();

    cout << s.peek() << endl;

    return 0;
}