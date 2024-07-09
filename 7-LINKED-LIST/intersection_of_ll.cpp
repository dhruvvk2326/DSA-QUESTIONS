// // // Approach

// // //     Two Pointer Approach
// // //         Find the lengths of both linked lists.
// // //         Move the pointer of the longer linked list ahead by the difference in lengths.
// // //         Now, both pointers are equidistant from the intersection point.
// // //         Traverse both linked lists simultaneously until you find the intersection point.
// // //     HashMap Approach
// // //         Traverse the first linked list (headA) and insert each node into the hash table.
// // //         Traverse the second linked list (headB) and check if each node is present in the hash table. If found, return that node as the intersection point.
// // //         If no intersection is found, return NULL.

// // /**
// //  * Definition for singly-linked list.
// //  * struct ListNode {
// //  *     int val;
// //  *     ListNode *next;
// //  *     ListNode(int x) : val(x), next(NULL) {}
// //  * };
// //  */
// // class Solution {
// // public:
// //     int length_ll(ListNode *head)
// //     {
// //         int node_count=0;
// //         while(head!=NULL)
// //         {
// //             node_count++;
// //             head=head->next;
// //         }
// //         return node_count;
// //     }
// //     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
// //     {
// //         int length1= length_ll(headA);
// //         int length2= length_ll(headB);

// //         if(length1 > length2)
// //         {
// //             while( length1 > length2 )
// //             {
// //                 headA=headA->next;
// //                 length1--;
// //             }
// //         }
// //         else if( length2 > length1 )
// //         {
// //             while( length2 > length1 )
// //             {
// //                 headB=headB->next;
// //                 length2--;
// //             }
// //         }
// //         while( headA!= NULL && headB !=NULL )
// //         {
// //             if(headA==headB)
// //                 return headA;
// //             headA=headA->next;
// //             headB=headB->next;
// //         }
// //         return NULL;
// //     }
// // };

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
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
//     {
//         unordered_map<ListNode*,bool>mp;
//         ListNode *ptr=headA;
//         while(ptr!=NULL)
//         {
//             mp[ptr]=true;
//             ptr=ptr->next;
//         }
//         ptr=headB;
//         while(ptr!=NULL)
//         {
//             if(mp[ptr])
//                 return ptr;
//             else
//                 mp[ptr]=true;
//             ptr=ptr->next;
//         }
//         return NULL;
//     }
// };