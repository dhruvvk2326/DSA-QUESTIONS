// lass Solution {
// public:
//     void traverseLeft(Node* root, vector<int>& ans) {
//         if ((root == nullptr) || (root->left==nullptr && root->right==nullptr))
//             return;
//         ans.push_back(root->data);
//         if (root->left)
//             traverseLeft(root->left, ans);
//         else
//             traverseLeft(root->right, ans);
//     }

    
    
//     void traverseLeaf(Node* root, vector<int>& ans) {
//         if (root == nullptr)
//             return;
//         if (!root->left && !root->right)
//             ans.push_back(root->data);
//         traverseLeaf(root->left, ans);
//         traverseLeaf(root->right, ans);
//     }

    
    
//     void traverseRight(Node* root, vector<int>& ans) {
//         if (root == nullptr || (!root->left && !root->right))
//             return;
//         if (root->right)
//             traverseRight(root->right, ans);
//         else 
//             traverseRight(root->left, ans);
            
//         ans.push_back(root->data);
//     }


//     vector<int> boundary(Node* root) {
//         vector<int> ans;
//         ans.push_back(root->data);
//         traverseLeft(root->left, ans);
//         traverseLeaf(root->left, ans);
//         traverseLeaf(root->right,ans);//What if only one node is present thats why separate
//         traverseRight(root->right, ans);
//     return ans;
// }
