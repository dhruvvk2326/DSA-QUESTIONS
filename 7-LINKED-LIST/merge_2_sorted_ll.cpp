// // /* Takes two lists sorted in increasing
// // order, and splices their nodes together
// // to make one big sorted list which
// // is returned. */
// // Node* SortedMerge(Node* a, Node* b)
// // {
// //     Node* result = NULL;

// //     /* Base cases */
// //     if (a == NULL)
// //         return (b);
// //     else if (b == NULL)
// //         return (a);

// //     /* Pick either a or b, and recur */
// //     if (a->data <= b->data) {
// //         result = a;
// //         result->next = SortedMerge(a->next, b);
// //     }
// //     else {
// //         result = b;
// //         result->next = SortedMerge(a, b->next);
// //     }
// //     return (result);
// // }

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
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         if(list1==nullptr) return list2;
//         if(list2==nullptr) return list1;
//         ListNode* ans=new ListNode(-1);
//         ListNode* mptr=ans;
//         while(list1!=nullptr && list2!=nullptr){
//             if(list1->val<=list2->val){
//                 mptr->next=list1;
//                 mptr=list1;
//                 list1=list1->next;
//             }
//             else{
//                 mptr->next=list2;
//                 mptr=list2;
//                 list2=list2->next;
//             }
//         }
//         if(list1!=NULL){
//             mptr->next=list1;
//         }
//         else{
//             mptr->next=list2;
//         }
//         return ans->next;
//     }
// };