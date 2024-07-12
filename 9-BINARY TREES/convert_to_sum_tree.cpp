// int convert(TreeNode<int>* root){
//     if(root==nullptr){
//         return 0;
//     }
//     int curr_sum=root->data;
//     int left=convert(root->left);
//     int right=convert(root->right);
//     root->data=left+right;

//     return root->data +curr_sum;
// }

// TreeNode<int> *convertToSumTree(TreeNode<int> *root) {
//     int t=convert(root);
//     return root;
// }