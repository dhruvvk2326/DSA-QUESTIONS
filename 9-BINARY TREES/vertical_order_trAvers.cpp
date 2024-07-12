// vector<vector<int>> verticalTraversal(TreeNode* root) {
//         // HORISONTAL DISTANCE , VERTICAL LEVEL
//         map<int, map<int, multiset<int>>> mp;
//         queue<pair<TreeNode*, pair<int, int>>> q;
//         q.push({root, {0, 0}});
//         while (!q.empty()) {
//             auto temp = q.front();
//             q.pop();
//             TreeNode* node=temp.first;
//             int horisontal_distance=temp.second.first;
//             int vertical_level=temp.second.second;
//             mp[horisontal_distance][vertical_level].insert(node->val);
//             if(node->left){
//                 q.push({node->left,{horisontal_distance-1,vertical_level+1}});
//             }
//             if(node->right){
//                 q.push({node->right,{horisontal_distance+1,vertical_level+1}});
//             }
//         }
//         vector<vector<int>> ans;
//         for(auto &[x,vec]: mp){
//             vector<int> temp;
//             for(auto &[i,j]:vec){
//                 for( auto &val:j){
//                     temp.push_back(val);
//                 }
//             }
//             ans.push_back(temp);
//         }
//         return ans;
//     }