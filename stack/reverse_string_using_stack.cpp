#include <iostream>

using namespace std;

class Node {

    public:

    char data;
    Node *next;

    Node(char data) {
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

    void push(char n) {

        Node *temp = new Node(n);
        
        if(!temp)
            cout << "Stack Overflow" << endl;
        else {
            temp->next = top;
            top = temp;
        }
    }

    void display() {
        if(top == NULL)
            cout << "Stack Underflow" << endl;
        else {
            Node *temp = top;

            while(temp != NULL) {
                cout << temp->data;
                temp = temp->next;
            }
        }
    }
};

int main() {

    Stack s;

    string str;
    cin >> str;

    for(int i=0;i<str.length();i++)
        s.push(str[i]);

    s.display();

    return 0;
}