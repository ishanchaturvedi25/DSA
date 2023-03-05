#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
    int data;
    Node *prev;
    Node *next;

    Node(int d) {
        this->data = d;
        this->prev = this->next = NULL;
    }

    ~Node() {

        int val = this->data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "Deleted Item is : " << val << endl;
    }
};

void traverse(Node *head) {

    Node *temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

}

int getLength(Node *head) {

    Node *temp = head;
    int cnt = 0;

    while(temp != NULL) {
        temp = temp->next;
        cnt++;
    }

    return cnt;

}

void insertAtHead(Node* &head, int d) {

    Node *newnode = new Node(d);
    if(head==NULL) {
        head = newnode;
        return;
    }

    newnode->next = head;
    head->prev = newnode;

    head = newnode;
}

void insertAtTail(Node* &head, int d) {

    Node *newnode = new Node(d);
    
    if(head==NULL) {
        head = newnode;
        return;
    }

    Node *temp = head;

    while(temp->next != NULL)
        temp = temp->next;
    
    temp->next = newnode;
    newnode->prev = temp;
}

void insertAtPossition(Node* &head, int pos, int d) {

    if(pos == 1) {
        insertAtHead(head,d);
        return;
    }

    if(pos > getLength(head)) {
        insertAtTail(head,d);
        return;
    }

    Node *newnode = new Node(d);
    int t = pos-1;
    Node *temp = head;

    while(--t)
        temp = temp->next;

    newnode->next = temp->next;
    temp->next->prev = newnode;
    temp->next = newnode;
    newnode->prev = temp;
}

void deleteAtHead(Node* &head) {

    if(head == NULL) {
        cout << "List is Empty" << endl;
        return;
    }

    if(head->next == NULL) {
        Node *temp = head;
        head = NULL;
        delete temp;
    }

    Node *temp = head;

    head = temp->next;
    temp->next->prev = NULL;
    temp->next = NULL;
    delete temp;

}

void deleteAtEnd(Node* &head) {

    if(head == NULL) {
        cout << "List is Empty" << endl;
        return;
    }

    if(head->next == NULL) {
        Node *temp = head;
        head = NULL;
        delete temp;
    }

    Node *temp = head;
    while(temp->next != NULL)
        temp = temp->next;

    temp->prev->next = NULL;
    temp->prev = NULL;
    delete temp;
    
}

void deleteAtPossition(Node* &head, int pos) {

    if(pos==1) {
        deleteAtHead(head);
        return;
    }

    if(pos==getLength(head)) {
        deleteAtEnd(head);
        return;
    }

    if(pos>getLength(head)) {
        cout << "Enter the possition in range" << endl;
        return;
    }

    Node *temp = head;
    int cnt = pos;
    while(--cnt)
        temp = temp->next;

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    temp->prev = temp->next = NULL;

    delete temp;

}

int main() {

    Node *head = NULL;
    Node *node1 = new Node(10);

    head = node1;

    insertAtHead(head,8);
    insertAtHead(head,6);
    insertAtHead(head,4);
    insertAtHead(head,2);

    insertAtTail(head,12);
    insertAtTail(head,14);
    insertAtTail(head,16);
    insertAtTail(head,18);
    insertAtTail(head,20);

    insertAtPossition(head,11,11);

    traverse(head);

    deleteAtHead(head);
    traverse(head);

    deleteAtEnd(head);
    traverse(head);

    deleteAtPossition(head,10);
    traverse(head);

    cout << getLength(head);

    return 0;
}