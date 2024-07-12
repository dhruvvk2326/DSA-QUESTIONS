// #include <iostream>
// #include <vector>
// #include <limits.h>
// #include <algorithm>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *left;
//     node *right;
//     node(int data)
//     {
//         this->data = data;
//         this->left = nullptr;
//         this->right = nullptr;
//     }
//     node()
//     {
//         left = nullptr;
//         right = nullptr;
//     }
// };

// node *create()
// {
//     cout << "enter data"
//          << " ";
//     int data;
//     cin >> data;
//     if (data == -1)
//     {
//         return nullptr;
//     }
//     node *root = new node(data);
//     cout << "enter for left of " << root->data;
//     root->left = create();

//     cout << "enter for right of " << root->data;
//     root->right = create();
//     return root;
// }

// int height(node *root, int &diameter)
// {
//     if (root == nullptr)
//     {
//         return 0;
//     }
//     int left_height = height(root->left, diameter);
//     int right_height = height(root->right, diameter);
//     diameter = max(diameter, left_height + right_height);
//     return (max(left_height, right_height) + 1);
// }

// int main()
// {
//     node *root = new node();
//     root = create();
//     int diameter = INT_MIN;
//     cout << height(root, diameter) << " ";
//     cout << diameter;
//     return 0;
// }
