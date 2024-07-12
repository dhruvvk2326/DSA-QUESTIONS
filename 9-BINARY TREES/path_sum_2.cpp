// class Solution {
// public:
//     void traversal(TreeNode* root,int& targetSum,vector<vector<int>>& ans,vector<int> &temp){
//         if(root==nullptr){

//             return;
//         }
//         if(root->left==nullptr && root->right==nullptr){
//             if(targetSum-root->val==0){
//                 temp.push_back(root->val);
//                 ans.push_back(temp);
//                 temp.pop_back();
//             }
//             return;
//         }
//         temp.push_back(root->val);
//         targetSum-=root->val;
//         traversal(root->left,targetSum,ans,temp);
//         traversal(root->right,targetSum,ans,temp);
//         temp.pop_back();
//         targetSum+=root->val;

//     }

//     vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
//         vector<vector<int>> ans;
//         vector<int> temp;
//         traversal(root,targetSum,ans,temp);
//         return ans;
//     }
// };