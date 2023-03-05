#include <bits/stdc++.h>

using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Deleted Item is : " << val << endl;
    }
};

void insertAtHead(Node *&head, int d)
{

    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertInMiddle(Node *&head, int i, int data)
{

    Node *temp = new Node(data);
    Node *t = head;
    for (int j = 1; j < i - 1; j++)
        t = t->next;
    temp->next = t->next;
    t->next = temp;
}

void insertAtTail(Node *&head, int d)
{

    Node *temp = new Node(d);
    if (head == NULL)
        head = temp;
    else if (head->next == NULL)
        head->next = temp;
    else
    {
        Node *t = head;
        while (t->next != NULL)
            t = t->next;
        t->next = temp;
    }
}

void traverse(Node *&head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deletion(Node *&head, int pos)
{

    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    Node *curr = head;
    Node *prev = NULL;
    int cnt = 1;
    while (cnt < pos)
    {
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}

int main()
{

    Node *head = NULL;

    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    traverse(head);

    insertInMiddle(head, 3, 25);
    traverse(head);

    deletion(head, 3);
    traverse(head);

    return 0;
}