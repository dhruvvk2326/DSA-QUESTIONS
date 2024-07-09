// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:

//     bool helper(ListNode*& head){
//         ListNode* slow=head;
//         ListNode* fast=head;
//         if(head==NULL || head->next==NULL) return false;
//         while(fast!=NULL){
//             fast=fast->next;
//             if(fast!=NULL){
//                 fast=fast->next;
//                 slow=slow->next;
//                 if(slow==fast){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
//     bool hasCycle(ListNode *head) {
//         return helper(head);
//     }
// };