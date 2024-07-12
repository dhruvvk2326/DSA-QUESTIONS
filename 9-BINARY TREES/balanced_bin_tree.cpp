
// class Solution
// {
// public:
//     int helper(TreeNode *root)
//     {
//         if (root == nullptr)
//         {
//             return 0;
//         }
//         int left_height = helper(root->left);
//         int right_height = helper(root->right);

//         if (left_height == -1 || right_height == -1 || abs(left_height - right_height) > 1)
//             return -1;
//         return max(left_height, right_height) + 1;
//     }

//     bool isBalanced(TreeNode *root)
//     {
//         if (helper(root) == -1)
//         {
//             return false;
//         }
//         else
//         {
//             return true;
//         }
//     }
// };
