// //O(N^2)
// class Solution {
// public:
//     int count = 0;

// void solve(TreeNode* root,long  long sum, long long targetSum) {
//     // Base Case
//     if (root == nullptr) {
//         return;
//     }
//     sum += root->val;
//     if (sum == targetSum) {
//         count++;
//     }
//     solve(root->left, sum, targetSum);
//     solve(root->right, sum, targetSum);
// }

// int pathSum(TreeNode* root, long long targetSum) {
//     if (root == nullptr) {
//         return 0;
//     }
//     solve(root, 0, targetSum);
//     pathSum(root->left, targetSum);
//     pathSum(root->right, targetSum);
//     return count;
// }
