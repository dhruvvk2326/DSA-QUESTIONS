// pair<int,int> solve(Node* root){
//         if(root==nullptr){
//             return {0,0};
//         }
//         auto left=solve(root->left);
//         auto right=solve(root->right);
        
//         //include
//         int include=root->data+left.second+right.second;
//         int exclude=(max(left.first,left.second)+max(right.first,right.second));
//         return {include,exclude};
//     }
    
//     int getMaxSum(Node *root) 
//     {
//         pair<int,int> p;
//         p=solve(root);
//         return max(p.first,p.second);
//     }