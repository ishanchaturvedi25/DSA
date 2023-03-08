#include <bits/stdc++.h>

using namespace std;

class node
{

public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{

    cout << "Enter the data for node : " << endl;
    int data;
    cin >> data;

    root = new node(data);

    if (data == -1)
        return NULL;

    cout << "Enter the data for left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data for right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(node *root) {

    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node *temp = q.front();
        q.pop();
        if(temp == NULL) {
            cout << endl;
            if(!q.empty())
                q.push(NULL);
        }
        else {
            cout << temp->data << " ";
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }
}

void preorderTraversal(node *root) {

    if(root == NULL)
        return;
    
    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void inorderTraversal(node *root) {

    if(root == NULL)
        return;
    
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

void postorderTraversal(node *root) {

    if(root == NULL)
        return;
    
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

void buildFromLevelOrder(node* &root) {

    queue<node *> q;
    int data;
    cout << "Enter data for root " << endl;
    cin >> data;
    root = new node(data);
    q.push(root);

    while(!q.empty()) {

        node *temp = q.front();
        q.pop();

        int leftData;
        cout << "Enter the left of node " << temp->data << endl;
        cin >> leftData;

        if(leftData != -1) {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        int rightData;
        cout << "Enter the right of node " << temp->data << endl;
        cin >> rightData;

        if(rightData != -1) {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

int main()
{

    node *root = NULL;

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    buildFromLevelOrder(root);

    // root = buildTree(root);

    levelOrderTraversal(root);

    // cout << "preorder traversal is : " << endl;
    // preorderTraversal(root);
    // cout << endl;

    // cout << "inorder traversal is : " << endl;
    // inorderTraversal(root);
    // cout << endl;

    // cout << "postorder traversal is : " << endl;
    // postorderTraversal(root);
    // cout << endl;

    return 0;
}