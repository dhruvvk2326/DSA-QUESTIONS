// class //Solution
// {
// public:

//     void solve(Node* root,int sum,int& maxSum,int len,int& maxLen){
        
//         //Base Case
//         if(root==nullptr){
//             if(len>maxLen){
//                 maxSum=sum;
//                 maxLen=len;
//             }
//             else if(len==maxLen){
//                 maxSum=max(sum,maxSum);
//             }
//             return;
//         }
//         solve(root->left,sum+root->data,maxSum,len+1,maxLen);
//         solve(root->right,sum+root->data,maxSum,len+1,maxLen);
        
//     }
    
//     int sumOfLongRootToLeafPath(Node *root)
//     {
//         int sum=0;
//         int maxSum=INT_MIN;
//         int len=0;
//         int maxLen=0;
//         solve(root,sum,maxSum,len,maxLen);
//         return maxSum;
//     }