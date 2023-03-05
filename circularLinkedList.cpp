#include <bits/stdc++.h>

using namespace std;

class Node {

    public:
    int data;
    Node *next;

    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    ~Node() {

        int val = this->data;
        if(this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "Deleted Item is : " << val << endl;
    }
};

void insertNode(Node* &tail, int element, int d) {

    Node *newnode = new Node(d);
    
    if(tail == NULL) {
        tail = newnode;
        tail->next = tail;
        return;
    }

    Node *curr = tail;

    while(curr->data != element)
        curr = curr->next;

    newnode->next = curr->next;
    curr->next = newnode;
}

void deleteNode(Node* &tail, int element) {

    if(tail == NULL) {
        cout << "List Is Empty" << endl;
        return;
    }

    if(tail->next == tail) {
        cout << "Deleted Item is : " << tail->data << endl;
        tail = NULL;
        return;
    }

    Node *prev = tail;
    Node *curr = tail->next;

    while(curr->data != element) {
        prev = curr;
        curr = curr->next;
    }

    if(curr == tail)
        tail = curr->next;

    prev->next = curr->next;
    curr->next = NULL;

    delete curr;
}

void traverse(Node *tail) {

    if(tail == NULL) {
        cout << "List Is Empty" << endl;
        return;
    }
    Node *temp = tail;

    while(temp->next != tail) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << temp->data << endl;
}

int main() {

    Node *tail = NULL;

    insertNode(tail,5,3);
    traverse(tail);

    insertNode(tail,3,5);
    traverse(tail);

    insertNode(tail,5,7);
    traverse(tail);

    insertNode(tail,7,9);
    traverse(tail);

    insertNode(tail,5,6);
    traverse(tail);

    insertNode(tail,9,10);
    traverse(tail);

    insertNode(tail,3,4);
    traverse(tail);

    deleteNode(tail,3);
    traverse(tail);

    deleteNode(tail,10);
    traverse(tail);

    deleteNode(tail,6);
    traverse(tail);

    deleteNode(tail,4);
    traverse(tail);

    deleteNode(tail,5);
    traverse(tail);

    deleteNode(tail,7);
    traverse(tail);

    deleteNode(tail,9);
    traverse(tail);

    deleteNode(tail,3);
    traverse(tail);

    return 0;
}