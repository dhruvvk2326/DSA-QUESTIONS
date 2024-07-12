// class Solution {
// public:
//     bool solve(TreeNode* p,TreeNode* q){
//         if(p==nullptr && q==nullptr){
//             return true;
//         }
//         if(p && q){
//             bool ans1=p->val==q->val;
//             bool ans2=solve(p->left,q->right);
//             bool ans3=solve(p->right,q->left);
//             return (ans1 && ans2 && ans3);
//         }
//         return false;
//     }

//     bool isSymmetric(TreeNode* root) {
//         return solve(root,root);
//     }