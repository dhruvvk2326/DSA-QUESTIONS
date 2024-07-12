// bool find(BinaryTreeNode<int>* root,int targetNodeVal,int &k,int &ans){
//     if(root==nullptr){
//         return false;
//     }
//     if(root->data==targetNodeVal){
//         return true;
//     }
//     bool left_ans=find(root->left,targetNodeVal,k,ans);
//     bool right_ans=find(root->right,targetNodeVal,k,ans);

//     if(left_ans==true || right_ans==true){
//         k--;
//     }
//     if(k==0){
//         ans=root->data;
//         k=-1;
//     }
//     return(left_ans || right_ans);
// }

// int findKthAncestor(BinaryTreeNode<int> *root, int targetNodeVal, int k) {
//     int ans=-1;
//     bool temp=find(root,targetNodeVal,k,ans);
//     return ans;
// }