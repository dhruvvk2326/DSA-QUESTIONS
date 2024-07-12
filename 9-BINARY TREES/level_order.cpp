#include <iostream>
#include <queue>
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

void level_order(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(nullptr);
    while (!q.empty())
    {
        node *temp = q.front();
        if (temp != nullptr)
        {
            q.pop();
            cout << temp->data << " ";

            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
        else
        {
            q.pop();
            cout << endl;
            if (!q.empty())
            {
                q.push(nullptr);
            }
        }
    }
}

int main()
{
    node *root = new node();
    root = create();
    level_order(root);
    return 0;
}
