// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//         vector<vector<int>> ans;
//         if(root==nullptr){
//             return ans;
//         }
//         queue<TreeNode*> q;
//         q.push(root);
//         bool leftToRight=true;
//         while(!q.empty()){
//             //pre processing of queue elements
//             int size=q.size();
//             vector<int> temp(size);
//             //level process
//             for(int i=0;i<size;i++){
//                 TreeNode* frontNode=q.front();
//                 q.pop();
//                 int index= leftToRight ? i : size-i-1;
//                 temp[index]=frontNode->val;
//                 if(frontNode->left){
//                     q.push(frontNode->left);
//                 }
//                 if(frontNode->right){
//                     q.push(frontNode->right);
//                 }
//             }
//             ans.push_back(temp);
//             leftToRight=!leftToRight;
//         }
//         return ans;
//     }
// };