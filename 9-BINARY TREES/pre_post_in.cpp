#include <iostream>
#include <vector>
#include <algorithm>
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
        this->left = nullptr;
        this->right = nullptr;
    }
    node()
    {
        left = nullptr;
        right = nullptr;
    }
};

node *create()
{
    cout << "enter data"
         << " ";
    int data;
    cin >> data;
    if (data == -1)
    {
        return nullptr;
    }
    node *root = new node(data);
    cout << "enter for left of " << root->data;
    root->left = create();

    cout << "enter for right of " << root->data;
    root->right = create();
    return root;
}

void inorder(node *root)
{
    if (root == nullptr)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(node *root)
{
    if (root == nullptr)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root)
{
    if (root == nullptr)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    node *root = new node();
    root = create();
    cout << "preorder";
    preorder(root);
    cout << endl;
    cout << "postorder";
    postorder(root);
    cout << endl;
    cout << "inorder";
    inorder(root);
    return 0;
}
