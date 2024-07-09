// // /**
// //  * Definition for singly-linked list.
// //  * struct ListNode {
// //  *     int val;
// //  *     ListNode *next;
// //  *     ListNode() : val(0), next(nullptr) {}
// //  *     ListNode(int x) : val(x), next(nullptr) {}
// //  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
// //  * };
// //  */
// // class Solution {
// // public:
// //     ListNode* deleteDuplicates(ListNode* head) {
// //         if(head==NULL || head->next==NULL){
// //             return head;
// //         }
// //         ListNode* ptr1=head;
// //         ListNode* ptr2=head->next;
// //         while(ptr2!=NULL){
// //             if(ptr1->val==ptr2->val){
// //                 ListNode* temp=ptr2;
// //                 ptr1->next=ptr2->next;
// //                 ptr2=ptr2->next;
// //                 temp->next=NULL;
// //                 delete(temp);
// //             }
// //             else{
// //                 ptr1=ptr1->next;
// //                 ptr2=ptr2->next;
// //             }

// //         }
// //         return head;
// //     }
// // };

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
//         if(head==NULL || head->next==NULL){
//             return head;
//         }
//         ListNode* current=head;
//         while(current->next!=NULL){
//             if(current->val==current->next->val){
//                 ListNode* temp=current->next;
//                 current->next=current->next->next;
//                 delete(temp);
//             }
//             else{
//                 current=current->next;
//             }
//         }
//         return head;
//     }
// };