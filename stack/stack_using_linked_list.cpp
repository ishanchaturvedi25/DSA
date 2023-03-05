#include <iostream>

using namespace std;

class Node {

    public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class Stack {

    public:

    Node *top;

    Stack() {
        top = NULL;
    }

    void push(int data) {

        Node *temp = new Node(data);

        temp->next = top;

        top = temp;
    }

    void pop() {
        if(top == NULL)
            cout << "Stack Underflow" << endl;
        else {
            Node *temp = top;
            top = top->next;
            delete temp;
        }
    }

    int peek() {
        if(top == NULL)
            return -1;
        return top->data;
    }

    void display() {
        Node* temp;

        if (top == NULL) {
            cout << "Stack Underflow" << endl;
           return;
        }
        else {
            temp = top;
            while (temp != NULL) {
                cout << temp->data;
                temp = temp->next;
                cout << " -> ";
            }
            cout << "NULL" << endl;
        }
    }

    bool isEmpty() {
        if(top == NULL)
            return true;
        return false;
    }

};

int main() {

    Stack s;

    s.push(22);
    s.push(44);
    s.push(66);

    s.display();

    cout << s.peek() << endl;

    s.pop();
    s.display();

    cout << s.peek() << endl;

    if(s.isEmpty())
        cout << "True" << endl;
    else
        cout << "False" << endl;

    s.pop();
    s.display();

    s.pop();
    s.display();

    s.pop();
    s.display();

}