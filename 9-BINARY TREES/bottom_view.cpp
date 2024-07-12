// #include<bits/stdc++.h>
// vector<int> bottomView(TreeNode<int> * root){
//     map<int,int> mp;
//     queue<pair<TreeNode<int> *,int>> q;
//     q.push({root,0});

//     while(!q.empty()){
//         auto temp=q.front();
//         q.pop();
        
        
//         mp[temp.second]=temp.first->data;
        
//         if(temp.first->left){
//             q.push({temp.first->left, temp.second - 1});
//         }
//         if(temp.first->right){
//             q.push({temp.first->right, temp.second + 1});
//         }
//     }
//     vector<int> ans;
//     for(auto j: mp ){
//         ans.push_back(j.second);
//     }
//     return ans;
// }