// //O(n)

// void traverseTree(TreeNode* root, vector<TreeNode*>& nodes){
//         if(root==nullptr){
//             return;
//         }
//         nodes.push_back(root);
//         traverseTree(root->left,nodes);
//         traverseTree(root->right,nodes);
//     }

    

//     void flatten(TreeNode* root) {
//         vector<TreeNode*> nodes;
//         traverseTree(root,nodes);
//         if(nodes.size()==0){
//             return;
//         }
//         for(int i = 0; i < nodes.size() - 1; i++) {
//             nodes[i]->left = nullptr;
//             nodes[i]->right = nodes[i+1];
//         }
        
//     }