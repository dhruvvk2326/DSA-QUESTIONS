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

int main()
{
    node *root = new node();
    root = create();
    return 0;
}